#include<stdio.h>
int main(void){
    int n,sum=0,in;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2==1){sum-=i;}
        if(i%2==0){sum+=i;}
    }
    printf("%d", sum);


}
