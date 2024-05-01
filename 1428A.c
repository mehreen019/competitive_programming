#include<stdio.h>
#include<stdlib.h>
int main(void){
    int tst, x1, x2, y1, y2, d1, d2,sum;
    d1=0; d2=0;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sum=abs(x1-x2)+abs(y1-y2);
        if(x1-x2==0 || y1-y2==0){
            printf("%d\n", sum);
        }else{
            printf("%d\n", sum+2);
        }
    }

    return 0;

}
