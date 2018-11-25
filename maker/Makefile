# Makefile for building Hello World.
#
# Author: P Talbot

CC = gcc
INCLUDE = -I includes/


all: main.o hello.o
	${CC} bin/main.o bin/hello.o -o target;

main.o: ./src/main.c includes/hello.h
	${CC} ${INCLUDE} -c src/main.c -o bin/main.o;

hello.o: ./src/hello.c includes/hello.h
	${CC} ${INCLUDE} -c ./src/hello.c -o bin/hello.o;

clean: 
	rm -rf *.o;
	rm target;
