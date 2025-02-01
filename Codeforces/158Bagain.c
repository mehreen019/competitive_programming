#include<stdio.h>
int main(void){
    int n, in;
    int sum1=0,sum2=0; int k1,k;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &in);
        if(in>2){sum2+=in;}
        else if(in<3){sum1+=in;}
    }
    k=(sum1/4)+(sum2/4);
   // k1=(sum1/4)+(sum2/4)+2;  //printf("%d",k);
   if(sum1%4==0 && sum2%4==0){printf("%d",k);}
   else if((sum1%4)==(sum2%4) && sum1%4<3){printf("%d", k+1);}
   else if(sum1%4!=0 && sum2%4==0){printf("%d", k+1);}
   else if(sum1%4==0 && sum2%4!=0){printf("%d", k+1);}
    else{printf("%d",k+2);}
}
