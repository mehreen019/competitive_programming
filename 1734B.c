#include<stdio.h>
int main(void){
    int tst,n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        if(j==1 || j==i){printf("1 ");}
        else{printf("0 ");}
        }printf("\n");
        }
    }
}
