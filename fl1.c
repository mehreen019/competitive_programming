#include<stdio.h>
int main(void){
    int tst,n,x,y,z;
    scanf("%d", &tst);
    while(tst--){int cou=3;
        scanf("%d %d %d %d", &n, &x, &y, &z);
        if(n>x)cou--;
        if(n>y)cou--;
        if(n>z)cou--;
        printf("%d\n", cou);
    }
}
