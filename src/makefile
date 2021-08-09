#runtests: all test

all: compile

compile: runflex runbison compilefile

runbison:
	bison -d guillex.y

runflex:
	flex guillex.l

compilefile:
	gcc lex.yy.c y.tab.c -ll -o guillex -idirafter ../libs/

#test:
#	./guillex < ../tests/test1.txt > ../results/test1result.txt
#	./guillex < ../tests/test2.txt > ../results/test2result.txt
#	./guillex < ../tests/test3.txt > ../results/test3result.txt
#y	./guillex < ../tests/test4.txt > ../results/test4result.txt
	