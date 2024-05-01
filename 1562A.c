#include<stdio.h>
int main(void){
    long long int tst,r,l,res,res1;
    scanf("%d", &tst);
    while(tst--){
        scanf("%lld %lld", &l, &r);
        res=r%l;
        for(int i=l; l<r; l++){
            res1=r%l;
            if(res1>res){res=res1;}
        }
    printf("%lld\n", res);

    }
}
