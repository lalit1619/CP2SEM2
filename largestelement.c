#include<stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
     int max=arr[0];
    for(int j=0;j<5;j++)
    {
       
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    printf("%d",max);
    return 0;
    
}