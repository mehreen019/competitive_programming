#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,t;
    float r,sum1,sum2,n;
    scanf("%d %d %d", &a,&b,&t);
    //if(t==0 || t==360){printf(".%.6d .%.6d", a,b);}
    //else if(t==180){printf("-%d -%d", a,b);}
    //else{
       r=sqrt(a*a+b*b);
        n=(3.1416*t)/180;
        sum1=r*cos(n); sum2=r*sin(n);
        printf("%f %f", sum1,sum2);
    //
}
