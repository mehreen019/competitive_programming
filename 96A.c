#include<stdio.h>
int main(void){
    char n[100];
    int cou=0,x;
    gets(n); x=strlen(n);
    if(x<7){printf("NO");
            return 0;}
    for(int i=1;i<x;i++){
        if(n[i]==n[i-1]){cou++;}
        else{cou=0;}        }
    if(cou>=6){printf("YES");}
    else{printf("NO");}
}
