#include<stdio.h>
int main(void){
    int n,x,sum;
    scanf("%d", &n);
    int r[n],a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &r[i]);
    }
    x=r[n-1];
    a[0]=x;
    for(int i=1;i<n;i++){
        if(x<r[n-i]){x=r[n-i];}
        a[i]=x+1;
    }
    for(int i=0;i<n;i++){
            sum=a[n-i-1]-r[i];
    if(sum<0){printf("0 ");}
       else{ printf("%d ", sum);}
    }

}
