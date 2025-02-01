#include<stdio.h>

int main(void){
    int tst, a,b,k,sum;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
            scanf("%d %d", &a,&b);
            if(a<b){printf("%d\n", b-a);}
            else if(a%b==0){printf("0\n");}
            else{
                k=(a/b)+1;
                sum=(k*b)-a;
                printf("%d\n", sum);
            }
            }
        return 0;
    }




