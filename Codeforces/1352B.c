#include<stdio.h>
int main(void){
    int tst, n, k, a[30], b[30],x,y,z,m,t;
    scanf("%d", &tst);
    while(tst--){ int sum=0;
        scanf("%d %d", &n,&k);
        for(int i=0;i<n;i++){scanf("%d", &a[i]);}
        for(int i=0;i<n;i++){scanf("%d", &b[i]);}
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    x=a[i];a[i]=a[j];a[j]=x;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(b[i]>b[j]){
                    y=b[i];b[i]=b[j];b[j]=y;
                }
            }
        }
        m=n; t=0;
        while(k--){
                if(a[t]<b[m-1]){
                    z=a[t];a[t]=b[m-1];b[m-1]=z;
                }
                m--;t++;
        }
        for(int i=0;i<n;i++){sum+=a[i];}
        printf("%d\n", sum);

    }}
