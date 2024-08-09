#include<stdio.h>
int main()
{
    int arr[6]={1, 3, 20, 4, 1, 0};
    if(arr[0]>arr[1]) printf("%d",arr[0]);
    if (arr[6-1]>arr[6-2]) printf("%d ",arr[6-1]);
    for(int i=1;i<6-1;i++)
    {
if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
printf("%d",arr[i]);
    }
}