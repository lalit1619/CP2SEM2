#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    int inverted=~no;
    int result=inverted+1;
    printf("%d",result);
    
}