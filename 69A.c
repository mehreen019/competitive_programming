#include<stdio.h>
int main(void){
    int n,a,b,c,s1=0,s2=0,s3=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a); s1+=a;
        scanf("%d", &b); s2+=b;
        scanf("%d", &c); s3+=c;
    }
    if(s1==0 && s2==0 && s3==0 ){printf("YES");}
    else{printf("NO");}
}
