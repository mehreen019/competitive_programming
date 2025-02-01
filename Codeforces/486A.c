#include<stdio.h>

int main(void){
  long long int a, sum=0;
 scanf("%lld", &a);
 for(int i=1; i<=a; i++){
        if(i%2==0){sum+=i;}
        else if(i%2!=0){sum-=i;}
 }
    printf("%lld", sum);
}
