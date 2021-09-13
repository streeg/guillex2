
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
	./tradutor ../tests/test1correto.c > ../results/test1resultcorreto.txt
	./tradutor ../tests/test2correto.c > ../results/test2resultcorreto.txt
	./tradutor ../tests/test3incorreto.c > ../results/test3resultincorreto.txt
	./tradutor ../tests/test4incorreto.c > ../results/test4resultincorreto.txt
	