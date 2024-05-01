#include<stdio.h>
int main(void){
    int n,sum=0,i;
    scanf("%d", &n);
    for(i=1;i<=sqrt(n);i++){
        for(int j=1;j<=i;j++){

            sum+=j;
            if(sum==n){printf("%d", i); return 0;}
            else if(sum>n){printf("%d", i-1); return 0;}

    }}
    printf("%d", i-1);
}
