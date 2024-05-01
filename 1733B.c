#include<stdio.h>
int main(void){
    int tst,n,x,y,k;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d %d", &n,&x,&y);k=n-1;
        if(!(x==0 || y==0)){printf("-1\n"); continue;}
        else if(x==0 && y==0){printf("-1\n"); continue;}
        else if(k%(x+y)){printf("-1\n"); continue;}
                k=2;
                for(int i=1;i<n;i++){
                    printf("%d ",k);
                    if(i%(x+y)==0)k=k+x+y;
                }
                printf("\n");
            }
    }
