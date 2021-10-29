
# Please change test to testtac if you want to test code generation or use test if you want to check the output from bison.
runtests: all test testtac testlab
# runtests: all testtac
# runtests: all testlab

all: compile

compile: runflex runbison compilefile moveheader

runflex:
	flex guillex.l


runbison:
	bison -vdt -Wconflicts-sr -Wcounterexamples --graph guillex.y -g -Wall

compilefile:
	gcc-11 lex.yy.c guillex.tab.c -ll -o tradutor -g -Wall


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

testtac: 
	./tradutor ../tests/testnalon.c > ../results/testnalon.txt

testlab:
	./tradutor ../tests/teste1_lab4.c > ../results/teste1_lab4.txt
	./tradutor ../tests/teste2_lab4.c > ../results/teste2_lab4.txt
	./tradutor ../tests/teste3_lab4.c > ../results/teste3_lab4.txt
	./tradutor ../tests/teste1_Nalon.c > ../results/teste1_Nalon.txt
	./tradutor ../tests/teste2_Nalon.c > ../results/teste2_Nalon.txt
	./tradutor ../tests/teste3_Nalon.c > ../results/teste3_Nalon.txt