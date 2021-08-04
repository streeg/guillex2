runtests: all test

all: compile

compile: runflex compilefile

runflex:
	flex guillex.l

compilefile:
	gcc lex.yy.c -o guillex -ll -g -Wall

test:
	./guillex < ../tests/test1.txt > ../results/test1result.txt