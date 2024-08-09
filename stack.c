#include<stdio.h>
#define n 10
int top=-1;
int stack[n];
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
    if (isFull()==1) printf("stackisfull");
     top++;
     printf("%d pushed to stack\n",item);
     stack[top]=item;
     printf("Top is now at %d\n", top);
}
int pop()
{           
    if(isEmpty()==1) printf("stackisempty");
    int temp;
    temp=stack[top];
    top--;
     printf("%d popped from stack\n", temp);
  printf("Top is now at %d\n", top);
  return temp;
}

int main()
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