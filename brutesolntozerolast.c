#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c1=0;
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[c1++]=arr[i];
            

        }
        
    }
    for(int i=c1;i<n;i++)
    {
        temp[i]=0;

    }
    for(int i=0;i<n;i++)
    printf("%d ",temp[i]);
}