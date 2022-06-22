CFLAGS=-Wall -g

analyse: analyse.o
	$(CC) $(CFLAGS) -o $@ $^

test:
	@./analyse --stats < ../README.md
	@./analyse --print-header > ../incomplete-cat-A-items.md
	@./analyse --incomplete-a < ../README.md >> ../incomplete-cat-A-items.md
	@./analyse --print-header > ../all-cat-A-and-B-items.md
	@./analyse --cata < ../README.md >> ../all-cat-A-and-B-items.md
	@./analyse --catb < ../README.md >> ../all-cat-A-and-B-items.md

clean:
	@rm -f analyse *.o
