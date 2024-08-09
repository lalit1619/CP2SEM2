#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    
   int arr1[]={1,3,5,7,9},
   arr2[]={3,16,17,19,20,21};
  int arr3[a+b];

    
    int j=0;
    int k=0;
    for(int l=0;l<a+b;l++)
    {
        if(j<a && k<b)
        {
            if(arr1[j]<arr2[k])
            {
                arr3[l]=arr1[j];
                j++;
            }
            else{
                arr3[l]=arr2[k];
                k++;
            }
        }
        else
        {
            if(j<a)
            {
                arr3[l]=arr1[j];
                j++;
            }
            else arr3[l]=arr2[k++];
        }
    }
    for(int z=0;z<a+b;z++)
    printf("%d ",arr3[z]);

   

}