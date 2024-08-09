#include<stdio.h>
#include<string.h>

int main()
{
    char ch[]={'h','e','l','l','o',' ','w','o','r','l','d'};
    int i=0;
    int size=sizeof(ch);
    while(ch[i]!='\0')
{
    printf("%c",ch[i]);
    i++;
}
printf("\n%d %d",size,strlen(ch));
}