CFLAGS=-Wall -g

analyse: analyse.o
	$(CC) $(CFLAGS) -o $@ $^

test:
	@./analyse --stats < ../Acceptance-criteria.md
	@./analyse --incomplete-a < ../Acceptance-criteria.md > ../incomplete-cat-A-items.md

clean:
	@rm -f analyse *.o
