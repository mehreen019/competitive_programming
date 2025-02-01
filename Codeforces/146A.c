#include<stdio.h>
int main(void){
    int n,sum1=0,sum2=0,c=0;
    scanf("%d", &n);
    char a[100];
    scanf("%s", a);
   for(int i=0;i<n;i++){
        if(a[i]!='4' || a[i]!='7'){
            printf("NO");// return 0;
        }}

    for(int i=0; i<n/2;i++){sum1+=a[i];}
    for(int i=(n/2);i<n;i++){sum2+=a[i];}
    if(sum1==sum2 && c==n){printf("YES");}
    else{printf("NO");}

}
