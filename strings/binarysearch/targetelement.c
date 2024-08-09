#include<stdio.h>
void binarysearch(int arr[],int n,int target)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target) printf("the element is at %d index",mid);
        if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int target;
    scanf("%d",&target);
    binarysearch(arr,n,target);
}