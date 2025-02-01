#include<stdio.h>
int main(void){
    int x,cou, w[400];
    memset(w, -1, sizeof(w));
    char s[101];// r="abcdefghijklmnopqrstuvwxyz";
    gets(s);
    x=strlen(s);
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(s[i]==s[j]){w[j]=0;}
        }
    }
    for(int i=0;i<x;i++){
        if(w[i]==-1)cou++;
    }
    if(cou%2==1){printf("IGNORE HIM!");}
    else if(cou%2==0){printf("CHAT WITH HER!");}
    //printf("%d", cou);
}
