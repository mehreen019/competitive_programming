#include<stdio.h>
int main(void){
    int n[5],a,cou=0;
    for(int i=0;i<4;i++){scanf("%d", &n[i]);}
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(n[i]>n[j]){
                 a=n[i];n[i]=n[j];n[j]=a;
            }
        }
    }
    for(int i=0;i<4;i++){
        if(n[i+1]==n[i])cou++;
    }
    printf("%d", cou);

}
