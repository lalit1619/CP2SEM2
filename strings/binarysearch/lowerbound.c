#include <stdio.h>
int lowerbound(int arr[],int n,int k)
{
  int low=0;
  int high=n-1;
  int ans=-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]>=k)
    {
      ans=mid;
      low=mid+1;
      
    }
    else
      high=mid-1;
  }
  return ans;
}
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,k;
  scanf("%d %d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int lower=lowerbound(arr,n,k);
  printf("%d\n",lower);
    
  }
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}