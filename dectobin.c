#include<stdio.h>
#include<stdlib.h>
int cou=0;
char* rec(int n, char* s){
    if(n==0) return s;
    itoa(n%2, s, 10);
    n=n/2;
    cou++; s++;
    rec(n,s);
}



int main(void){
    int n,i=0;
    char s[50];
    scanf("%d", &n);
    char* p=rec(n, s);
    i=cou-1;
    while(cou--){
        printf("%c", s[i]);
        i--;
    }

}
