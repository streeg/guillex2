
runtests: all test

all: compile

compile: runflex runbison compilefile

runbison:
	bison -vdt -Wconflicts-sr -Wcounterexamples --graph guillex.y

runflex:
	flex guillex.l

compilefile:
	gcc lex.yy.c guillex.tab.c -ll -o tradutor

test:
	./tradutor < ../tests/test1.c > ../results/test1result.txt
	./tradutor < ../tests/test2.c > ../results/test2result.txt
	./tradutor < ../tests/test3.c > ../results/test3result.txt
	./tradutor < ../tests/test4.c > ../results/test4result.txt
	