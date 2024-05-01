#include<stdio.h>

int main(void){
    int tst, a,b,k,i,j,r;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d %d", &a, &b);
        if(a>b){k=a-b;}
        else{k=b-a;}
        j=k/10;
        r=k%10;// sol uses (a-b)+9 but why??
        if(r==0 || k<11){printf("%d\n", j);}
        else {printf("%d\n", j+1);}
    }
}
