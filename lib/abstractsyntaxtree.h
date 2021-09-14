#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int integer;
  float decimal;
  char character;
  char *value;
  char type;
  struct node *left;
  struct node *middle0;
  struct node *middle1;
  struct node *middle2;
  struct node *right;
}Node;


Node* createNode0(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Int(int value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> integer = value;
  node -> type = 'i';
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Dec(float value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> decimal = value;
  node -> type = 'd';
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0List(char *value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 'l';
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Nil(char *value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 'n';
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}


Node* createNode1(char *value, Node* left) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode2(char *value, Node* left, Node* middle0) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode3(char *value, Node* left, Node* middle0, Node* middle1) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode4(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> right = NULL;

  return node;
}

Node* createNode5(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> right = right;

  return node;
}

void printAndFreeTree(Node *node) {


  if(node == NULL)
    return;
  
  if(node -> type == 's')
    printf("%s\n", node -> value);
  if(node -> type == 'i')
    printf("%d\n", node -> integer);
  if(node -> type == 'd')
    printf("%f\n", node -> decimal);
  if(node -> type == 'l')
    printf("%s\n", node -> value);
  if(node -> type == 'n')
    printf("%s\n", node -> value);
  
  printAndFreeTree(node -> left);
  printAndFreeTree(node -> middle0);
  printAndFreeTree(node -> middle1);
  printAndFreeTree(node -> middle2);
  printAndFreeTree(node -> right);
  free(node);
}