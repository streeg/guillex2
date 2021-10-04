
runtests: all test

all: compile

compile: runflex runbison compilefile moveheader

runflex:
	flex guillex.l


runbison:
	bison -vdt -Wconflicts-sr -Wcounterexamples --graph guillex.y

compilefile:
	gcc lex.yy.c guillex.tab.c -ll -o tradutor


moveheader:
	mv guillex.tab.h ../lib/

test:
	./tradutor ../tests/test1correto.c > ../results/test1resultcorreto.txt
	./tradutor ../tests/test2correto.c > ../results/test2resultcorreto.txt
	./tradutor ../tests/test3correto.c > ../results/test3resultcorreto.txt
	./tradutor ../tests/test4correto.c > ../results/test4resultcorreto.txt
	./tradutor ../tests/test5correto.c > ../results/test5resultcorreto.txt
	./tradutor ../tests/testnalon.c > ../results/testenalon.txt
	./tradutor ../tests/test1incorreto.c > ../results/test1resultincorreto.txt
	./tradutor ../tests/test2incorreto.c > ../results/test2resultincorreto.txt
	./tradutor ../tests/test3incorreto.c > ../results/test3resultincorreto.txt
	