#include<stdio.h>
int main(void){
    int tst,l,r,x,a,b;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d %d", &l,&r,&x);
        scanf("%d %d", &a,&b);
        if(a>b){int k=a; a=b; b=k;}
        if((r-a)>=x && (b-l)>=x) printf("YES\n");
        else if(a==b){printf("0\n");}
        else printf("-1\n");
    }
}
