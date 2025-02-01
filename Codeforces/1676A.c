#include<stdio.h>
int main(void){
    int tst,n,m,a,x; char s;
    scanf("%d", &tst);
    while(tst--){ int sum; int num[50];
        scanf("%d%d", &n,&m);
        for(int i=0;i<n;i++){sum=0;
            for(int j=0;j<m;j++){
            scanf(" %c", &s);
            sum+=s;
            }
            num[i]=sum;
        }
        for(int i=0;i<n;i++){printf("%d ", num[i]);}
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(num[i]>num[j]){
                a=num[i]; num[j]=num[i]; num[j]=a;
            }
        }
    }for(int i=0;i<n;i++){printf("%d ", num[i]);}
    x=num[1]-num[0];
    for(int i=1;i<n;i++){
        if((num[i]-num[i-1])<x){x=num[i]-num[i-1];}
    }
    printf("%d\n", x);
    }
}
