#include<stdio.h>
int recursion(int n)
{
    int result;
    if(n==0) return 1;
    
    else
    {
result=n*recursion(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=recursion(n);
    printf("%d",result);
}