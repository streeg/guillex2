runtests: all test

all: compile

compile: runflex compilefile

runflex:
	flex guillex.l

compilefile:
	gcc lex.yy.c -o traudutor -ll -g -Wall

test:
	./traudutor < ../tests/test1.txt > ../results/test1result.txt
	./traudutor < ../tests/test2.txt > ../results/test2result.txt
	./traudutor < ../tests/test3.txt > ../results/test3result.txt
	./traudutor < ../tests/test4.txt > ../results/test4result.txt
	