#define _POSIX_C_SOURCE 200809L
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int nr_cat_a_items;
static int nr_complete_cat_a_items;
static bool arg_print_stats;
static bool arg_print_incomplete_cat_a_items;
static bool arg_print_complete_cat_a_items;

void
print(char *line)
{
	if (arg_print_stats)
		return;
	/* strip first column */
	printf("%s\n", line + 6);
}

void
process_cat_a_item(char *line)
{
	++nr_cat_a_items;
	if (strstr(line, "complete")) {
		++nr_complete_cat_a_items;
		if (arg_print_complete_cat_a_items)
			print(line);
	} else {
		if (arg_print_incomplete_cat_a_items)
			print(line);
	}
}

void
process_line(char *line)
{
	static bool have_printed_header;

	if (line[0] != '|')
		return;
	if (!have_printed_header) {
		print(line);
		if (!strncmp(line, "| --- |", 7))
			have_printed_header = true;
		return;
	}
	if (!strncmp(line, "|  A", 4))
		process_cat_a_item(line);
}

int
main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s < input\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	for (int i = 1; i < argc ; ++i) {
		if (!strcmp(argv[i], "--stats")) {
			arg_print_stats = true;
		} else if (!strcmp(argv[i], "--incomplete-a")) {
			arg_print_incomplete_cat_a_items = true;
		} else if (!strcmp(argv[i], "--complete-a")) {
			arg_print_complete_cat_a_items = true;
		}
	}

	char *line = NULL;
	size_t len = 0;
	while ((getline(&line, &len, stdin) != -1)) {
		char *p = strrchr(line, '\n');
		if (p) {
			*p = '\0';
		}
		process_line(line);
	}
	free(line);

	if (arg_print_stats) {
		printf("Cat A total number: %d\n", nr_cat_a_items);
		printf("Cat A complete:     %d\n", nr_complete_cat_a_items);
		printf("Cat A %% complete:   %.0f\n", 100.0 * nr_complete_cat_a_items / (nr_complete_cat_a_items + nr_cat_a_items));
	}
}
