all: ejson.c test.c
		gcc ejson.c test.c  -o test -lm
