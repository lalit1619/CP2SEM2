#include<stdio.h>
int secondsmallest(int arr[],int n)
{
    int smallest=arr[0];
    int ssmallest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];

        }
        else if(arr[i]>smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int smallest=secondsmallest(arr,n);
    printf("%d",smallest);
}