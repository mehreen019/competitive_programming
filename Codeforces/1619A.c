#include<stdio.h>
    int tst, n,k,cou;!~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           io8
t           int main(void){
    char s[101];
    scanf("%d", &tst);
    while(tst--){cou=0;
        scanf("%s", s);
        n=strlen(s);
        if(n%2){printf("NO\n"); continue;}
        else{
            k=n/2;
            for(int i=0;i<k;i++){
                if(s[i]==s[i+k]){cou++;}
            }
        if(cou==k){printf("YES\n");}
        else{printf("NO\n");}
        }
    }
}
