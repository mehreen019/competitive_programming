#include<stdio.h>
int main(void){
    long long int n,l;
    long long int r[1000];
    double f[1000];
    double x,y,a;
    scanf("%lld %lld", &n, &l);
    for(int i=0;i<n;i++){
        scanf("%lld", &r[i]);
        f[i]=(double)r[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(f[i]>f[j]){ a=f[i]; f[i]=f[j]; f[j]=a;  }
        }
    }
    x=f[0];
    for(int i=1;i<n;i++){
        y=(f[i]-f[i-1])/2;
        if(y>x){x=y; }
    }
    y=l-f[n-1];
    if(y>x){ x=y; }
    printf("%f", x);
}
