#include<stdio.h>
int main()
{
    int rem;
    int i=0;

    int no;
    scanf("%d",&no);
    int arr[10];
    for( i;no!=0;i++)

    {
        rem=no%2;
        arr[i]=rem;
        no=no/2;

    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
}