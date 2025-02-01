#include<stdio.h>
int main(void){
    long long int n,k,x,t=1,j=1;
    scanf("%lld %lld", &n, &k);long long int r[n];
    r[0]=0;
    if(n%2){x=(n/2)+1;}
    else{x=(n/2);}
    for(int i=1;i<=n;i++){
        if(i%2){r[t]=i;t++;}
        else{r[x+j]=i;j++;}
    }
    printf("%lld", r[k]);
}
