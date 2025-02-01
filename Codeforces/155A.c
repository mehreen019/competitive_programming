#include<stdio.h>
int main(void){
    int n,a,b,cou=0l;
    scanf("%d", &n);
    int r[n];
    for(int i=0;i<n;i++){
        scanf("%d", &r[i]);
    }
    a=r[0];b=r[0];
    for(int i=1;i<n;i++){
        if(r[i]>a){a=r[i];cou++;}
        else if(r[i]<b){b=r[i]; cou++;}
    }
    printf("%d", cou);

}
