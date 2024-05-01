#include<stdio.h>
int main(void){
    int tst,a,b,c,sum1=0,sum2=0;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d %d", &a,&b,&c);
        if(a>b){if(a>c){sum1=a; sum2=b+c;}}
        else if(b>a){if(b>c){sum1=b; sum2=a+c;}}
        else if(c>a){if(c>b){sum1=c; sum2=a+b;}}
        if(sum1==sum2){printf("YES\n");}
        else{printf("NO\n");}
    }


}
