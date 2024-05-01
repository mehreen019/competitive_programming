#include<stdio.h>
int main(void){
    int tst,n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        if(n>23){printf("NO\n");}
        else if(n<8){printf("NO\n"); }
        else{printf("YES\n"); }
    }

}
