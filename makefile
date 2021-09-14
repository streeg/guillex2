VAL=../tests/test1correto.c
#VAL=../tests/test2correto.c
#VAL=../tests/test3correto.c
#VAL=../tests/test4correto.c
#VAL=../tests/test5correto.c
#VAL=../tests/test1incorreto.c
#VAL=../tests/test2incorreto.c

runmakesrc: accessFolderAndMake

accessFolderAndMake: 
	cd src && make

valgrind:
	cd src && valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor $(VAL)

clean: 
	rm -f *.out && cd src && rm -f *.o *.tab.c *.tab.h lex.yy.c tradutor *.output  *.dot && cd ../results && rm -f *.txt