#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "uthash.h"

typedef struct symbol {
  int id;
  char *name;
  char *symbolType;
  char *isFuncOrVar;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

void addSymbol(int id, char *name, char *symbolType, char *isFuncOrVar) {
  struct symbol *s;

  HASH_FIND_INT(symbolTable, &id, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> id = id;
    s -> name = name;
    s -> symbolType = symbolType;
    s -> isFuncOrVar = isFuncOrVar;
    HASH_ADD_INT(symbolTable, id, s);
  } else {
    printf("cannot add symbol to table\n");
  }
}


void freeSymbols() {
  Symbol *currentSymbol, *tmp;

  HASH_ITER(hh, symbolTable, currentSymbol, tmp) {
    HASH_DEL(symbolTable, currentSymbol); 
    free(currentSymbol);
  }
}

void printSymbols() {
    Symbol *s;

    for (s = symbolTable; s != NULL; s = s -> hh.next) {
        printf("|   %d    |    %s     |      %s    |    %s    |\n", s -> id, s -> name, s -> symbolType, s -> isFuncOrVar);
    }
}