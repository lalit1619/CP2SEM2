#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==0)
            continue;
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }

        }
        if(count>1)
        {
            printf("%d is repeated %d times \n",arr[i],count);

        }
    }
}