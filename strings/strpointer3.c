#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="lalit bhatta ";
    str[0]='D';
    printf("%s",str);
    char *ptr=str;
    ptr="bhatta lalit";
    printf("%s",ptr);
  
}