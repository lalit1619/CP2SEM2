#include<stdio.h>
int asortedornot(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
 if(arr[i]>=arr[i-1]) 
 {

 }
 else return 0;
    }
    return 1;
}

int dsortedornot(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
 if(arr[i]<=arr[i-1]) 
 {

 }
 else return 0;
    }
    return 1;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int check=asortedornot(arr,n);
    int check1=dsortedornot(arr,n);
    if(check || check1) printf("Array is sorted");
    else  printf("Array is not sorted");
}