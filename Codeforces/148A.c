#include<stdio.h>
int main(void){
    int d,k,l,m,n,cou=0;
    scanf("%d %d %d %d %d", &k,&l,&m,&n,&d);
    for(int i=1;i<=d;i++){
        if(!(i%k)){cou++; continue;}
        if(!(i%l)){cou++; continue;}
        if(!(i%m)){cou++; continue;}
        if(!(i%n)){cou++; continue;}
    }

    printf("%d", cou);
}
