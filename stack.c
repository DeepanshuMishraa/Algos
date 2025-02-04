#include <stdio.h>
#define MAX 100

int stack[MAX];

int top = -1;

void push(int x) // complexity O(1)
{
  if (top == MAX - 1)
  {
    printf("Stack Overflow \n");
    return;
  }

  stack[++top] = x;
}

void pop() // complexity O(1)
{
  if (top == -1)
  {
    printf("Stack Underflow \n");
    return;
  }

  top--;
}

int peek() // complexity O(1)
{
  if (top == -1)
  {
    printf("Stack is empty \n");
    return -1;
  }

  return stack[top];
}

int display() // complexity O(n)
{
  if (top == -1)
  {
    printf("Stack is empty \n");
    return -1;
  }

  for (int i = 0; i <= top; i++)
  {
    printf("%d ", stack[i]);
  };
}
