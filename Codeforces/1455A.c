#include<stdio.h>
int main(void){
    long long int n,tst,k;
    scanf("%lld",&tst);
    while(tst--){
            k=0;
        scanf("%lld", &n);
        //k=log10(n)+1;
        while(n>0){n=n/10; k++;}
        printf("%lld\n", k);
    }
}
//idk why number don't hold?
