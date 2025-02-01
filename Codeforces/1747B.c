#include<stdio.h>
int main(void){
    int tst, n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        int l=1,r=3*n;
        if(n%2){printf("%d\n",(n/2)+1 );}
        else {printf("%d\n", n/2);}
        for(int i=1;l<r;i++){
            printf("%d %d ", l,r);
            l=l+3; r=r-3;
        }
        printf("\n");
    }
}
