#include<stdio.h>
int main(void){
    long long int tst,j;
    double k,n;
    scanf("%lld", &tst);
    while(tst--){
        scanf("%lf", &n);
        k=ceil(n/2);
        j=(int)k;
        printf("%lld\n", j);
    }
}
