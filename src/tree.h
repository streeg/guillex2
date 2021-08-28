#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  char *value;
  char type;
  struct node *left;
  struct node *middle;
  struct node *right;
}Node;

Node* create_node(char *value, char type) {
  Node* node = (Node*)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = type;
  node -> left = node -> middle = node -> right = NULL;

  return node;
}

Node* add_node_left(char *value, char type, Node *tree) {
  Node* node = create_node(value, type);

  tree -> left = node;

  return tree;
}

Node* add_node_middle(char *value, char type, Node *tree) {
  Node* node = create_node(value, type);

  tree -> middle = node;

  return tree;
}

Node* add_node_right(char *value, char type, Node *tree) {
  Node* node = create_node(value, type);

  tree -> right = node;

  return tree;
}

void print_tree(Node *node) {

  if(node == NULL)
    return;
  
  printf("%c\n", node -> type);
  
  print_tree(node -> left);

  print_tree(node -> middle);

  print_tree(node -> right);

  free(node);
}