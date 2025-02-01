#include<stdio.h>
int main(void){
    int tst,n,a;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        int r[n];
        for(int i=0;i<n;i++){
            scanf("%d", &r[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(r[i]>r[j]){a=r[i]; r[i]=r[j];r[j]=a;  }
            }
        }
        printf("%d\n", (2*r[n-1])-(r[n-2]+r[0]));
    }
}
