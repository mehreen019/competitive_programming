#include<stdio.h>
int main(void){
    long long int n,k=4;
    scanf("%lld", &n);
    while(2){
    if((n-k)%2==0 || (n-k)%3==0 || (n-k)%5==0){printf("%lld %lld", k, n-k); return 0;}
    else{k+=2;}
    }
}
