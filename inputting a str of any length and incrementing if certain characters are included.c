#include<stdio.h>
#include<string.h>

int main(void)
{
    char n[10];
    int i=0,sum=0,l;
    gets(n);
    l=strlen(n);
    while(l--)
    {
    if(n[i]=='m' || n[i]=='s')
        {sum;}else{sum++;}
        i++;}
    printf("%d", sum);

}
