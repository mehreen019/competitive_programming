#include<stdio.h>

int main(void){
    int n,rem;
    scanf("%d", &n);
    for(int i=0; n>0 ; i++){
        rem=n%1000;
        printf("%d,", rem);
        n=n/1000;
    }return 0;
}
