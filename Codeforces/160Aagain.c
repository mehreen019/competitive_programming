#include<stdio.h>
int main(void){
    int n,sum=0,cou=0,sum1=0,a; int r[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &r[i]);
        sum+=r[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(r[i]>r[j]){a=r[i];r[i]=r[j];r[j]=a; }
        }
    }
    for(int i=n; i>0;i-- ){
        if(sum1<=sum/2){sum1+=r[i-1]; cou++;}
        else{break;}
    }
    printf("%d", cou);
}
