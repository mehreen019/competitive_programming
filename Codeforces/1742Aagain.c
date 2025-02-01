#include<stdio.h>
int main(void){
    int tst,n[9],a,s1,s2;
    scanf("%d", &tst);
    while(tst--){
        for(int i=0;i<3;i++){
            scanf("%d", &n[i]);
        }
        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
            if(n[i]>n[j]){a=n[i];n[i]=n[j];n[j]=a;}
            }}
        s1=n[0]+n[1];s2=n[2];
        if(s1==s2){printf("YES\n");}
        else{printf("NO\n");}


    }
}
