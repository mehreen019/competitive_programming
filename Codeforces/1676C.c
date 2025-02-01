#include<stdio.h>
int main (void){
    int tst,n,l,j,i,a,x; char h;
    scanf("%d", &tst);
    while(tst--){int sum=0;
        scanf("%d %d", &n, &l);
        int r[n];
        for(i=0;i<n;i++){
            for(j=0;j<l;j++){
                scanf(" %c", &h);
                sum+=h-96;
            }
            if(j==l){r[i]=sum; sum=0;}
       }
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(r[i]>r[j]){a=r[i]; r[i]=r[j]; r[j]=a; }
            }
        }
        x=r[1]-r[0];
        for(i=1; i<n;i++){
            if(r[i]-r[i-1]<x){x=r[i]-r[i-1]; }
        }
     /*   for(i=0; i<n;i++){
            printf("%d ", r[i]);
        }*/
        printf("%d\n", x);
    }

//positional value diye arekta array kra jay seta beshi accurate
}
