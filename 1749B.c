#include<stdio.h>
int main(void){
    long long int tst,a,x;
    scanf("%lld", &tst);
    while(tst--){long long int sum=0;
        scanf("%lld", &a);
        int he[a],sp[a];
        for(int i=0;i<a;i++){
            scanf("%lld", &he[i]); sum+=he[i];
        }
        for(int i=0;i<a;i++){
            scanf("%lld", &sp[i]); sum+=sp[i];
        }
        x=sp[0];
        for(int i=0;i<a;i++){
            if(sp[i]>x)x=sp[i];
        }
        printf("%lld\n", sum-x);
    }
}
