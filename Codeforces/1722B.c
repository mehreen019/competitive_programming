#include<stdio.h>

int main(void){
    int tst,c,sum;
    char s1[100], s2[100];
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d", &c);
        scanf("%s %s", &s1, &s2);sum=0;
        for(int i=0; i<c; i++){

            if(s1[i]==s2[i] || s1[i]=='G'&&s2[i]=='B' || s1[i]=='B'&&s2[i]=='G'){sum++;}
            else{sum;}

        }if(sum>=c){printf("YES\n");}
            else{printf("NO\n");}

    }
}
