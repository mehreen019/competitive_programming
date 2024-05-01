#include<stdio.h>
#include<math.h>
int main(void){
    long long int tst, n;
    scanf("%lld", &tst);
    while(tst--){long long int sum=0;
        scanf("%lld", &n);
        for(int i=1;i<=n;i=i+2){
                sum+=(pow(i-1,2))*2;
            }
            printf("%d\n", sum);
    }
}
