#include<stdio.h>
int main(void){
    int tst,n,k,p;int r[100];
    scanf("%d", &tst);
    while(tst--){int j=1,i=0;
        scanf("%d", &n);
        p=n;
        k=n-1;
        while(n--){
            if(j%2==1){r[i]=j; i++;}
            else if(j%2==0){r[k]=j; k--; }
            j++;
        }
    for(int i=0;i<p;i++){
        printf("%d ", r[i]);
    }
    printf("\n");
    }
}
