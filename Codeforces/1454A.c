#include<stdio.h>

int main(void){
    int tst, n;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d", &n);
        for(int i=2;i<=n; i++){
            printf("%d ", i);
        }
        printf("1\n");
    }
}
