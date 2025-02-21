#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
  int data;
  struct Node *next;
} Node;

Node *head = NULL;

void insertAtEnd(int value)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL)
  {
    head = newNode;
  }

  else
  {
    Node *temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;

    printf("Node inserted successfully \n");
  }
}
