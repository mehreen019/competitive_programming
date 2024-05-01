#include<stdio.h>
int main(void){
 int tst, a,b,c,k,sum;
 scanf("%d", &tst);
 for(int i=1; i<=tst; i++){
    scanf("%d %d %d %d", &a, &b, &c, &k);
    sum=a+b+c+k;
    if(a>=k && b>=k && c>=k){
    if(sum%3==0)
    {if(a%k==0 && b%k==0 && c%k==0)
        {printf("Case %d: Peaceful\n", i);}
        else{printf("Case %d: Fight\n", i);}
    }else
    {printf("Case %d: Fight\n", i);
    }
 }}
    return 0;
}
