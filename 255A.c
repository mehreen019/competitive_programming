#include<stdio.h>
int main(void){
    int tst,n,s1=0,s2=0,s3=0;
    scanf("%d", &tst);
    for(int i=1;i<=tst;i++){
        scanf("%d", &n);
        if(i%3==1){s1+=n;}
        if(i%3==2){s2+=n;}
        if(i%3==0){s3+=n;}
    }printf("%d%d%d", s1,s2,s3);
    if(s1>s2){if(s1>s3){
        printf("chest");
    }}
    else if(s2>s3){printf("biceps");}
    if(s3>s1 && s3>s2){printf("back");}

}
