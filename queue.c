#include <stdio.h>

#define MAX 100

int queue[MAX];

int front = -1;
int rear = -1;

void enqueue(int x) // complexity O(1)
{
  if (rear == MAX - 1)
  {
    printf("Queue Overflow \n");
    return;
  }

  if (front == -1)
  {
    front = 0;
  }

  queue[++rear] = x;
}

void dequeue() // complexity O(1)
{
  if (front == -1)
  {
    printf("Queue Underflow \n");
    return;
  }

  if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    front++;
  }
}

int peek() // complexity O(1)
{
  if (front == -1)
  {
    printf("Queue is empty \n");
    return -1;
  }

  return queue[front];
}

int display() // complexity O(n)
{
  if (front == -1)
  {
    printf("Queue is empty \n");
    return -1;
  }

  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  };
}
