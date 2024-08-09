#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int count=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<n-1;i++)
    {
        if(arr[count]!=arr[i])
        {
            count++;
            brr[count]=arr[i];

        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
}