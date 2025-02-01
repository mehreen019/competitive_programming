#include<stdio.h>
int r(int n){int sum;
if(n==1){return 1;}
else
    {
        return n+ r(n-1);
        sum+=r(n);
        return sum;
    }


}


int main(void){
    int n,sum=0,i;
    scanf("%d", &n);
printf("%d", r(n));
}
