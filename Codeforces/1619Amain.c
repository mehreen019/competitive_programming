#include<stdio.h>
#include<string.h>

int main(void){
 int tst,k,k1,sum;
 char st[100], st1[50],st2[50];
 scanf("%d", &tst);
 for(int i=0; i<tst; i++){
        sum=0;
        int j=0;
    scanf("%s", st);
    k=strlen(st);
    if(k%2!=0){printf("NO\n");
                continue;}
    else{k1=k/2;
            for(int i=0;i<k1;i++){
                st1[i]=st[i];
            }
            for(int i=k1;i<k;i++){
                st2[j]=st[i];
                j++;
            }
    }
    sum=strcmp(st1,st2);
            if(sum==0){printf("YES\n");}
            else{printf("NO\n");}

 }
}
