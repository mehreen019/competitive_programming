#include<stdio.h>
int main(void){
    int n,a,cou1=0,cou2=1,x,i;
    scanf("%d", &n);
    int r[n];
    for(int i=0;i<n;i++){
        scanf("%d", &r[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(r[i]>r[j]){a=r[i];r[i]=r[j];r[j]=a;  }
        }
    }
    x=r[n-1];
    for(i=n-1;r[i]==x;i--){
        cou1++;
    }
    for(i;i>0;i--){
        if(r[i]==r[i-1]){
            cou2++;
            if(cou2>cou1)cou1++;
        }
        else cou2=1;
    }


    printf("%d", cou1);
}
