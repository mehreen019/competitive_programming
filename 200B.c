#include<stdio.h>

int main(void){
    int l,i;
    float sum=0;
    int s[100];
    scanf("%d", &l);
    for(i=0; i<l;i++){
        scanf("%d", &s[i]);
        sum+=s[i];
    }
    printf("%f", sum/l);

}
