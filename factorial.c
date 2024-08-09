#include<stdio.h>
int recursive(int n)
{
    int result=1;
    if (n==0) return 1;
    else
    {
        result=n*recursive(n-1);

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=recursive(n);
    printf("%d",result);
}