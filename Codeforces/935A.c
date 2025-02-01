#include<stdio.h>
int main(void){
    int n,cou;
    scanf("%d", &n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0)cou++;
    }
    printf("%d",cou);
}
