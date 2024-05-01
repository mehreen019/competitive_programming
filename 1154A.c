#include<stdio.h>

int main(void){
    int a,b,c,d;
    float sum1,sum2,sum3;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum1=b/a; sum2=c/a; sum3=d/a;
    if(sum1<1 && sum2<1 && sum3<1){
        printf("%d %d %d", a-b, a-c, a-d);
        return 0;
    }
    sum1=a/b; sum2=c/b; sum3=d/b;
    if(sum1<1 && sum2<1 && sum3<1){
        printf("%d %d %d", b-a, b-c, b-d);
        return 0;
    }
    sum1=a/c; sum2=b/c; sum3=d/c;
    if(sum1<1 && sum2<1 && sum3<1){
        printf("%d %d %d", c-a, c-b, c-d);
        return 0;
    }
    printf("%d %d %d", d-a, d-b, d-c);
    return 0;
}
