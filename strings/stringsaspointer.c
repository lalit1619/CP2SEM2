#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="lalit bhatta";
    char *p=&str[0];
    printf("%p\n",p);
    printf("%p",str);
}