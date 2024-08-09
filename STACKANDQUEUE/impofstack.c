#include<stdio.h>
#define n 5
 int stack[n],top=-1;
 int isFull()
 {
    return top==n-1;
 }
 int isEmpty()
 {
    return top==-1;
 }
 int push(int item)
 {
    if(isFull()) printf("the stack is full\n");
    else
    {
        top++;
        stack[top]=item;
        printf("%d\n",stack[top]);
    }

 }
 int pop()
 {
    if(isEmpty()) printf("the stack is empty\n");
    else
    {
        int temp=stack[top--];
        
        printf("this element is poped out from the stack %d\n",temp);
    }

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
