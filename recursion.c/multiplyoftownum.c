#include<stdio.h>
int multiply(int a,int b)
{
    if(b==0) return 0;
    if(b==1) return a;
    return a+multiply(a,b-1);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int mult=multiply(a,b);
    printf("%d",mult);
}