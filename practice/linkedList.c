#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
  int value;
  struct NODE *next;
} NODE;

NODE *rootNode = NULL;

void addNode(int val)
{
  // create a node
  // navigate list to the end
  // add new node to end of list

  NODE *newNode = malloc(sizeof(NODE));
  newNode->value = val;
  newNode->next = NULL;

  if (rootNode == NULL)
  {
    rootNode = newNode;
    return;
  }

  NODE *trav = rootNode;

  while(trav->next != NULL) {
      trav = trav->next;
  }
  trav->next = newNode;
}

void displayList()
{
  // goal: display the list in order from beginning to end seperated by ,
  // example 5, 8, 9, 4
  // example 5, 8, 9
  // example 5
  NODE * np = rootNode;
    while (np->next != NULL)
    {
        printf("%i, ", np->value);
        np = np->next;
    }
    printf("%i\n", np->value);
}

int main(void)
{
  // NODE rootNode;
  // rootNode.value = 5;
  // rootNode.next = NULL;
  // NODE secondNode;
  // secondNode.value = 10;
  // secondNode.next = NULL;
  // myNode.next = &secondNode;
  // printf("%i\n", secondNode.value);
  // printf("%i\n", myNode.next->value);
  addNode(5);
  addNode(8);
  addNode(9);
  addNode(4);
  displayList();
//   printf("%i\n", rootNode->value);
//   printf("%i\n", rootNode->next->value);
//   printf("%i\n", rootNode->next->next->value);
//   printf("%i\n", rootNode->next->next->next->value);

  // rootnode.next->next->value
}