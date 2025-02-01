#include<stdio.h>

int main(void){
    int tst, h,m;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d %d", &h,&m);
        printf("%d\n", ((24-h)*60)-m);
    }
}
