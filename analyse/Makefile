CFLAGS=-Wall -g

analyse: analyse.o
	$(CC) $(CFLAGS) -o $@ $^

test:
	@./analyse --stats < ../README.md > ../stats.md
	@./analyse --print-header > ../incomplete-cat-B-items.md
	@./analyse --incomplete-b-plus < ../README.md >> ../incomplete-cat-B-items.md
	@./analyse --incomplete-b < ../README.md >> ../incomplete-cat-B-items.md
	@./analyse --print-header > ../all-cat-A-and-B-items.md
	@./analyse --cata < ../README.md >> ../all-cat-A-and-B-items.md
	@./analyse --catb < ../README.md >> ../all-cat-A-and-B-items.md
	@./generate_graph.sh

clean:
	@rm -f analyse *.o
