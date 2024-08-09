#include<stdio.h>
#include<string.h>

int main()
{
    char ch[]="hello world";
    int i=0;
    int size=sizeof(ch);
    while(ch[i]!='\0')
{
    printf("%c",ch[i]);
    i++;
}
printf("\n %d",strlen(ch));
}