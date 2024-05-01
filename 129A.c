#include<stdio.h>
int main(void){
    int n,sum=0,cou=0;
    scanf("%d", &n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d", &s[i]);
        sum+=s[i];
    }
    if(sum%2==0){
        for(int i=0;i<n;i++){
            if(s[i]%2==0){cou++;}
        }
    }
    else if(sum%2==1){
         for(int i=0;i<n;i++){
            if(s[i]%2==1){cou++;}
        }
    }
    printf("%d", cou);
}
