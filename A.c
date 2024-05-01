#include<stdio.h>
int main(void){
 int tst, a,b,c,sum;
 scanf("%d", &tst);
 if(tst<10000)
 for(int i=1; i<=tst; i++){
    scanf("%d %d %d", &a, &b, &c);
    if(a<21 && b<21 && c<21){
    sum=a+b+c;
    if(a>=1 && b>=1 && c>=1){
    if(sum%3==0){
        printf("Case %d: Peaceful\n", i);
    }else{printf("Case %d: Fight\n", i);
    }}
 }}
    return 0;
}
