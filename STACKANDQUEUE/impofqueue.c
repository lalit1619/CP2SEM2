#include<stdio.h>
#define n 10
int front=-1;
int rear=-1;
int queue[n];
void enqueue(int item)
{
    if(rear==n-1) printf("queue is full");
    else
    {
        if(front==-1)
        {
            front=rear=0;
        }
        else
        {
            rear++;
        }
    queue[rear]=item;
    printf("%d enqueued to queue.\n",item);
    }
}
int dequeue()
{
    if(front==-1) printf("queue is empty");
    int item=queue[front];
    if(front>=rear) front=rear=-1;
    front++;
    printf("%d dequeued from queue.\n",item);
  return item;
}
int main(){
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  enqueue(50);
}
