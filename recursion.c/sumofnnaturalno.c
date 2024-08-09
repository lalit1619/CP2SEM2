#include<stdio.h>
int recursion(int n)
{
    int sum;
    if(n==0) return 0;
    else
    {
        return n+recursion(n-1);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=recursion(n);
    printf("%d",sum);
    return 0;
}