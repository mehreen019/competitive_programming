#include<stdio.h>
int main(void){
    int tst, a,b,p1,p2;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d %d", &a, &b);
        for(int i=0;i<b;i++){
           scanf("%d %d", &p1,&p2);
        }
        if(b<a){printf("YES\n");}
        else{printf("NO\n");}
    }
}
