#include<stdio.h>
int calc(int a, char c, int b){
    if(c=='+')return a+b;
    else if(c=='-')return a-b;
    else if(c=='*')return a*b;
    else if(c=='/')return a/b;
    else if(c=='%')return a%b;
    else {
        printf("ERROR");
        return 0;
    }

}
int main(void){
    int a,b,res; char c;
    scanf("%d %c %d", &a,&c,&b);
    res=calc(a,c,b);
    printf("%d", res);
}
