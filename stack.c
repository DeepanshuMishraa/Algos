#include <stdio.h>
#define MAX 100

int stack[MAX];

int top = -1;

void push(int x)
{
  if (top == MAX - 1)
  {
    printf("Stack Overflow \n");
    return;
  }

  stack[++top] = x;
}

void pop()
{
  if (top == -1)
  {
    printf("Stack Underflow \n");
    return;
  }

  top--;
}

int peek()
{
  if (top == -1)
  {
    printf("Stack is empty \n");
    return -1;
  }

  return stack[top];
}

int display()
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
