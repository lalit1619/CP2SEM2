#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
for(int i=0,j=(n/2)-1;i<n/4;i++,j--)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int i=0;i<n;i++)
printf("%d ",arr[i]);

}