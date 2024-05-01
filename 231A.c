#include<stdio.h>
int main(void){
    int tst, a,b,c, sum;
    sum=0;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d %d %d", &a, &b, &c);
        if (a+b+c>=2){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
