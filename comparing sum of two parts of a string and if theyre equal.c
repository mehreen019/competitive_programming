#include<stdio.h>
#include<string.h>

int main(void){
 int tst,k,k1,sum1,sum2;
 char st[100];
 scanf("%d", &tst);
 for(int i=0; i<tst; i++){
    sum1=0; sum2=0;
    scanf("%s", st);
    k=strlen(st);
    if(k%2!=0){printf("NO\n");}
    else{k1=k/2;
            for(int i=0;i<k1;i++){
                sum1+=st[i];
            }
            for(int i=k1;i<k;i++){
                sum2+=st[i];
            }
            if(sum1==sum2){printf("YES\n");}
            else{printf("NO\n");}

    }

 }



}
