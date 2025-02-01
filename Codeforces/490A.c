#include<stdio.h>
int main(void){
    int n,r[5000], s1[5000], s2[5000], s3[5000], p1=0,p2=0,p3=0,x;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &r[i]);
        if(r[i]==1){s1[p1]=i+1; p1++;}
        if(r[i]==2){s2[p2]=i+1; p2++;}
        if(r[i]==3){s3[p3]=i+1; p3++;}
    }
    if(p1<p2){
        if(p1<p3){x=p1;}
        else{x=p3;}
    }
    else if(p2<p3){x=p2;}
    else{x=p3;}
    printf("%d\n", x);
    for(int i=0;i<x;i++){
       printf("%d %d %d\n", s1[i], s2[i], s3[i]);
    }
}
