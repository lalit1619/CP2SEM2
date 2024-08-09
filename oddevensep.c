#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int even[n];
    int odd[n];
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[evencount++]=arr[i];
            
        }
        else
        {
            odd[oddcount++]=arr[i];
            

        }
        
    }
    printf("even numbers");
    for(int i=0;i<evencount;i++)
    printf("%d ",even[i]);
    printf("\n");
     printf("odd numbers");
    for(int i=0;i<oddcount;i++)
    printf("%d ",odd[i]);
    

}