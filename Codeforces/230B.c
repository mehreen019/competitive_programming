#include<stdio.h>
#include<math.h>
int main(void){
    double k;
    long long int n,l,ar,c;
    scanf("%lld", &n);
    while(n--){int cou=0;
        scanf("%lld", &ar);
        if(ar==1){
            printf("NO\n");
            continue;
        }
        else if(ar%2==0 && ar!=4){
            printf("NO\n"); continue;
        }
        k=sqrt(ar);
        l=(int)k;
        if(l==k){c=(int)sqrt(l);
            for(long long int i=2;i<=c;i++){
            if(c%i==0){cou++; break;}
        }
        if(cou==0)printf("YES\n");
        else printf("NO\n");
        }
        else printf("NO\n");
    }
}
