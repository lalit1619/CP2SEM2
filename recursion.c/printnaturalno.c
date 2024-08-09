#include<stdio.h>
void recursion(int n)
{
    if (n==0) return ;
    recursion(n-1);
    printf("%d ",n);
    return;

}
int main()
{
    int n;
    scanf("%d",&n);
    recursion(n);
}