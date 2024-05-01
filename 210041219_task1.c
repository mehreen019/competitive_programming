#include<stdio.h>
int comparee(int a, int b){
    if(a>b)return 1;
    else if(b>a)return -1;
    else if(b==a)return 0;
}
int main(void){
    int a,b,res;
    scanf("%d %d", &a,&b);
    res=comparee(a,b);
    printf("%d", res);
}
