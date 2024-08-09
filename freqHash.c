#include <stdio.h>
int main(){
    int arr[7]={1,1,1,2,2,2,3};
    int max=100;
    int temp[max];
    temp[max]=0;
    int m=arr[0];
    for(int i=0;i<7;i++){
        temp[arr[i]]++;
        if(arr[i]>m)m=arr[i];
    }
    for(int i=0; i<=m; i++){
        if(temp[i]>1){
            printf("%d is repeted %d times",i,temp[i]);
            printf("\n");
        }
    }
}