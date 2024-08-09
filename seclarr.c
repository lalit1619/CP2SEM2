#include<stdio.h>
#include<limits.h>
int main()
{
    int largest=INT_MIN;
    int slargest=INT_MIN;
    int arr[5];
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else
        {
            if(arr[i]>slargest)
            {
                slargest=arr[i];
            }
        }
    }
    printf("%d",slargest);
}