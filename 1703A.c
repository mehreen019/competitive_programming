#include<stdio.h>
#include<string.h>
int main(void){
    int tst,sum; char s[4],S1[4];
    scanf("%d", &tst);
    while(tst--){
        scanf("%s", s);
        strupr(s);
       if(strcmp(s,"YES")==0){printf("YES\n");}
       else{printf("NO\n");}
    }
}
