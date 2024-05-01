#include<stdio.h>
int main(void){
    int x,cou=0;
    char s[100];
    gets(s);
    x=strlen(s);
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(s[i]==s[j])cou++;
        }
    }
    x=x-cou;
    if(x%2==1){printf("IGNORE HIM!");}
    else if(x%2==0){printf("CHAT WITH HER!");}
    printf("%d", x);
}
