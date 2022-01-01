CFLAGS=-Wall -g

analyse: analyse.o
	$(CC) $(CFLAGS) -o $@ $^

test:
	@./analyse --stats < ../Acceptance-criteria.md
	@./analyse --incomplete-a < ../Acceptance-criteria.md > ../Minimum-viable-product-outstanding-items.md
	@./analyse --complete-a < ../Acceptance-criteria.md > ../Minimum-viable-product-complete-items.md

clean:
	@rm -f analyse *.o
