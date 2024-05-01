#include<stdio.h>
int main(void){
    int tst,n,x;
    scanf("%d", &tst);
    while(tst--){int cou=0;
        scanf("%d", &n);
        int r[n];
        for(int i=0;i<n;i++){
            scanf("%d", &r[i]);
          }
        for(int i=n-2;i>0;i--){
            if(r[i]==0){x=i+1; break;}
        }
        for(int i=0;i<x;i++){
            if(r[i]==1)cou++;
        }
        printf("%d\n", cou);
    }



}
