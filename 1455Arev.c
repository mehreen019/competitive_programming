#include<stdio.h>
int main(void){
    int tst,k;
    char s[100];
    scanf("%lld",&tst);
    while(tst--){
            k=0;
        scanf("%s", s);
        k=strlen(s);
        printf("%d\n", k);
    }
}
