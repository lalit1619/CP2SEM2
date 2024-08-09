#include<stdio.h>
#define n 10
int stack[n],top=-1;
int isFull()
{
    return top==n-1;
}
int isEmpty()
{
    return top==-1;
}
int push (int item)
{
    if(isFull())
    {
        printf("stack overflow");
        return -1;
    }
     printf("%d pushed to stack\n",item);
    top++;
    stack[top]=item;
     printf("Top is now at %d\n", top);
}
int pop()
{
    if(isEmpty())
    {
        printf("stack underflow");
    }
   int  temp=stack[top--];
    printf("%d popped from stack\n", temp);
  printf("Top is now at %d\n", top);
  return temp;

}
int main ()
{
     int temp;
  push(12);
  push(23);
  temp=pop();
  push(54);
  temp=pop();
  temp=pop();
  temp=pop();
  return 0;
}