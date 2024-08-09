#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="lalit bhatta";
    char *ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}