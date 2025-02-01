#include<stdio.h>
int main(void){
    int n,num[100000],res,cou=0;
    float sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
        if(num[i]==3 || num[i]==4){cou++;}
    }
    res=ceil(sum/4);
    if(cou==n){ printf("%d", res+1);}
    else{printf("%d", res);}
}
