#include<stdio.h>
#define n 10
int queue[n];
int rear=-1;
int front=-1;
void enqueue (int item)
{
    if(rear==n-1)
    {
        printf("queue is full");
        return;
    }
    if(front=rear=-1)
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
int dequeue()
{
    if(front==-1)
    {
        printf("queue is empty");
        return -1;
    }
    int item=queue[front];
    if(front==rear)
    front=rear=-1;
    else
    front++;
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