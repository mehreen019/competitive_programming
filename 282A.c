#include<stdio.h>
int main(void){
    int tst,cou=0;
    char s[4];
    scanf("%d", &tst);
    while(tst--){
        scanf("%s", s);
        if(s[1]=='+'){cou++;}
        else if(s[1]=='-'){cou--;}
    }
    printf("%d", cou);
}
