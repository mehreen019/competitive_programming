#include<stdio.h>
int main(void){
    int tst,n,ar,j;
    scanf("%d", &tst);
    while(tst--){int cou=0,sum=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &ar);
            if(ar==0)cou++;
            sum+=ar;
        }
        if(cou==1 && sum>0){printf("1\n");}
        else if(cou==n){printf("%d\n", cou);}
        else if(cou==0 && sum==0){printf("%d\n", (n/2)+1);}
        else{   float k=n;
                k/=2;
                j=ceil(k);
                printf("%d\n", j);}
    }
}
