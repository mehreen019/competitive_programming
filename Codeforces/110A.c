#include<stdio.h>
int main(void){
    char n[100000]; int x,cou=0;
    scanf("%s", n); x=strlen(n);
    for(int i=0;i<x;i++){
        if(n[i]=='4' || n[i]=='7'){cou++;}}
        if(cou==4 || cou==7){printf("YES");}
    else{printf("NO%d",cou);}
    }
