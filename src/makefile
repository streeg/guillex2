
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
	./tradutor ../tests/test3correto.c > ../results/test3resultcorreto.txt
	./tradutor ../tests/test4correto.c > ../results/test4resultcorreto.txt
	./tradutor ../tests/test1incorreto.c > ../results/test1resultincorreto.txt
	./tradutor ../tests/test2incorreto.c > ../results/test2resultincorreto.txt
	