#include<stdio.h>
int main()
{
    char ch[]="hello world";
    int i=0;
    while(ch[i]!='\0')
    {
        printf("%c",ch[i]);
        i++;

    }
    int j=0;
    while(ch[j]!='\0')
    {
        printf("%c",j[ch]);
        j++;

    }
    int k=0;
    while(ch[k]!='\0')
    {
        printf("%c",*(ch+k));
        k++;
    }
}