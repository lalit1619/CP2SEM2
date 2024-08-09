#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]="lalit";
    char str2[10]="bhatta";
    int l1=strlen(str1);
    int l2=strlen(str2);
    for(int i=0;i<=l2;i++)
    {
        str1[l1+i]=str2[i];

    }
    printf("%s",str1);

    
}