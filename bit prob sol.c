#include<stdio.h>
main(){
int n,val=0;
char a[4];
scanf("%d\n",&n);
while(n--)gets(a),val+=44-a[1];//ascii value of + is 43 and - is 45
printf("%d",val);}
