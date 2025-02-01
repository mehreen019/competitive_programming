#include<stdio.h>
int main(void){
    int n,k,in[70],sum,tru,j;
    sum=0;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++){
        scanf("%d", &in[i]);
        j=i+1;
        if(j==k){
            tru=in[i];
        }}
    for(int i=0; i<n; i++){
        if(in[i]>0 && in[i]>=tru){
            sum++;
        }}

    printf("%d", sum);
    return 0;

}
