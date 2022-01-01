MAKEFLAGS=--no-print-directory

all:
	@make -C analyse/ clean
	@make -C analyse/
	@make -C analyse/ test
