#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long num1i,num2i,sum1f=0,sum1,num1f=0,num2f=0,c=1;
    scanf("%lld",&num1i);
    scanf("%lld",&num2i);
    sum1=num1i +num2i;
    num1i=num1i*10;
    while(num1i>0){
            num1i=num1i/10;
            if(num1i%10==0)continue;
        num1f=num1f+ (num1i%10)*c;
        c=c*10;

    }
    c=1;
    num2i=num2i*10;
    while(num2i>0){
            num2i=num2i/10;
            if(num2i%10==0)continue;
        num2f=num2f+ (num2i%10)*c;
        c=c*10;

    }
    c=1;
    sum1=sum1*10;
    while(sum1>0){
            sum1=sum1/10;
            if(sum1%10==0)continue;
        sum1f=sum1f+ (sum1%10)*c;
        c=c*10;
    }
    if (sum1f==(num1f+num2f))printf("YES");
    else printf("NO");
    return 0;
}
