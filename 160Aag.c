#include<stdio.h>
int main(void){
    int l,n[101],sum2=0,sum3=0;
    scanf("%d", &l);
    for(int i=0;i<l;i++){
        scanf("%d", &n[i]);
        sum3+=n[i];
    }
    sum2=n[l-1];
    sum3-=n[l-1];
    for(int i=2;i<l;i++){
        if(sum2<=sum3){sum2+=n[l-i]; sum3-=n[l-i];}
        else {printf("%d", i-1);}
    }

}
