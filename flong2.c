#include<stdio.h>
int main(void){
    int tst,n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        if(n<1400){printf("Division 4\n");}
        else if(n>=1400 && n<1600){printf("Division 3\n");}
        else if(n>=1600 && n<1900){printf("Division 2\n");}
        else if(n>=1900){printf("Division 1\n");}
    }
}
