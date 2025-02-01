#include<stdio.h>

int main(void){
    int n,tst,i,arr[100],cou,sum;
    scanf("%d", &tst);
    for(int j=0; j<tst; j++){
        scanf("%d", &n);
        cou=0;
        for(i=0; i<2*n; i++){
            scanf("%d", &arr[i]);
        }
        for(i=0; i<2*n; i+=2){
            sum=0;
            sum=arr[i]+arr[i+1];
            if(sum%2==1){cou++;}
            else{printf("NO\n"); break;}
        }
    if(cou==n){printf("YES\n");}
    }
}
