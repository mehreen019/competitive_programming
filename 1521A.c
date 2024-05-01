#include<stdio.h>
int main(void){
    long long tst,a,b;
    scanf("%lld", &tst);
    while(tst--){
            long long sum,sum1;
        scanf("%lld %lld", &a,&b);

        sum=a*b;
        sum1=sum+a;
        if(b==1){printf("NO\n");}
        else {printf("YES\n");printf("%lld %lld %lld\n",a,sum,sum1);}
    }
}
