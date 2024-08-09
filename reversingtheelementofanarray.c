#include<stdio.h>
void swap(int arr[],int f, int l)
{
    int temp=arr[f];
    arr[f]=arr[l];
    arr[l]=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        swap(arr,i,j);
    }
    for(int i=0;i<n;i++)
    {
printf("%d ",arr[i]);
    }
}