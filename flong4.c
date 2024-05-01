#include<stdio.h>
#include<string.h>
int main(void){
    char s[102]; int r[50]={0},n=0,x;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        x=s[i]-96;
        r[x]=1;
    }
    for(int i=0;i<50;i++){
        if(r[i]==1)n++;
    }
    if(n%2==0){printf("CHAT WITH HER!"); }
    else if(n%2==1){printf("IGNORE HIM!"); }
}
