#include<stdio.h>
int main(void){
    int tst,x,y;
    char s1[50],s2[50];
    scanf("%d", &tst);
    while(tst--){
        scanf("%s %s", s1,s2);
        x=strlen(s1);y=strlen(s2);
        /*if(x>1){if(s1[0]=='L' || s1[0]=='M'){continue;}}
        if(y>1){if(s2[0]=='L' || s2[0]=='M'){continue;}}
        if(s1[x-1]=='M' && x>1){continue;}
        if(s2[y-1]=='M' && y>1){continue;}*/
        if(x==y && s1[x-1]==s2[y-1]){printf("=\n"); continue;}
        else if(s1[x-1]!=s2[y-1]){
            if(s1[x-1]=='M'){if(s2[y-1]=='L'){printf("<\n"); continue;}
                                else if(s2[y-1]=='S'){printf(">\n"); continue;}}//
            else if(s2[y-1]=='M'){if(s1[x-1]=='L'){printf(">\n");continue;}
                                else if(s1[x-1]=='S'){printf("<\n");continue;}}
            else if(s1[x-1]=='S'){printf("<\n");}
            else{printf(">\n");}//
        }
        else if(s1[x-1]==s2[y-1]){
            if(s1[x-1]=='S'){if(x>y){printf("<\n");}
                                else{printf(">\n");}}//
            else if(s1[x-1]=='L'){if(x>y){printf(">\n");}//
                                else{printf("<\n");}}
        }



    }
}
