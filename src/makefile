runtests: all test

all: compile

compile: runflex compilefile

runflex:
	flex guillex.l

compilefile:
	gcc lex.yy.c -o guillex -ll -g -Wall

test:
	./guillex < ../tests/test1.txt > ../results/test1result.txt
	./guillex < ../tests/test2.txt > ../results/test2result.txt
	./guillex < ../tests/test3.txt > ../results/test3result.txt
	./guillex < ../tests/test4.txt > ../results/test4result.txt
	