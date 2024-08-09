#include<stdio.h>
int secondLargest(int arr[],int n)
{
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>slargest && arr[i]<largest)
        {
            slargest=arr[i];
        }

    }
    return slargest;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int slargest=secondLargest(arr,n);
    printf("%d",slargest);
}