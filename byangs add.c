#include<stdio.h>
int main(void){
    int a,b,s1,s2;
    scanf("%d %d", &a,&b);
    while(a>0 && b>0){
        s1=a%10;s2=b%10;
        a=a/10; b=b/10;
        if(s1+s2>9){printf("Yes"); return 0;}
    }
    printf("No");
}
