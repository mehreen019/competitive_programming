#include<stdio.h>
int main(void){
    int tst,a,b,c;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d %d", &a,&b,&c);
        if((a>b && a<c) || (a>c && a<b)){printf("%d\n", a);}
        else if((b>a && b<c) || (b>c && b<a)){printf("%d\n", b);}
        else if((c>a && c<b) || (c>b && c<a)){printf("%d\n", c);}
    }
}
