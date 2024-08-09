#include<stdio.h>
int main()
{
   
    
    int k=5;
    int arr1[5]={1,5,9,11,15},arr2[5]={2,4,6,8,10};
    
    int merged[10];

    int i=0,j=0,l=0;

    while(i<5 && j<5)
    {
        if(arr1[i]<arr2[j])
        {
            merged[l++]=arr1[i++];
        }
        else
        merged[l++]=arr2[j++];
    }
    while(i<5)
    {
        merged[l++]=arr1[i++];
    }
    while(j<5)
    {
        merged[l++]=arr2[j++];
    }
    printf("%d",merged[k-1]);
}