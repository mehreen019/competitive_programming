#include<stdio.h>
int main(void){
    int tst,m,n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d", &n, &m);
        if(n%m==0){printf("YES\n");}
        else{printf("NO\n");}
    }
}
