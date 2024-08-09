#include<stdio.h>
void odd (int a,int n);
void even (int a,int n);
void odd(int a,int n)
{
    if(a<=n)
    printf("%d ",a+1);
    a++;
    even(a,n);
}
void even(int a,int n)
{
    if(a<=n) 
    printf("%d ",a-1);
    a++;
    odd(a,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    odd(a,n);
    return 0;
}