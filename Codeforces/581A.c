#include<stdio.h>
int main(void){
    int a,b,x,y;
    scanf("%d %d", &a,&b);
    if(a<b){x=b;y=a;}
    else{x=a;y=b;}
    printf("%d ", y);
    printf("%d", (x-y)/2);
}
