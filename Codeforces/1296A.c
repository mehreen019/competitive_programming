#include<stdio.h>

int main(void){
 int tst, n, sum,i, arr[2000];
 scanf("%d", &tst);
 for(int j=0; j<tst; j++){
    scanf("%d", &n);
    sum=0;
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    if(sum%2){printf("YES\n");}
    else{printf("NO\n");}
 }
}
