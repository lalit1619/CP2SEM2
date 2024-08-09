#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("enter a string");
    scanf("%[^\n]s",str);
    int size=0;
    int i=0;
    while(str[i]!='\0')
{
    size++;
    i++;
}
for(int k=0,j=size-1;k<=j;k++,j--)

{
    int temp=str[k];
    str[k]=str[j];
    str[j]=temp;
    


}
printf("%s",str);

}