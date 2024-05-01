#include<stdio.h>
#include<math.h>
int main(void){
    float n,x,tst;
    int res;
    scanf("%f", &tst);
    while(tst--){
        scanf("%f %f", &n, &x);
        res=ceil((n-2)/x)+1;
        if(n<3){printf("1\n");}
        else printf("%d\n", res);
    }
}
