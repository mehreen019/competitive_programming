#include<stdio.h>

int main(void){
    int tst,c,sum;
    char s1[100], s2[100];
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d", &c);
        scanf("%s %s", &s1, &s2);
        for(int i=0; i<c; i++){
            sum=0;
            if(s1[i]==s2[i] || s1[i]=='G'&&s2[i]=='B'){sum++;}
            else{sum;}
        }if(sum>=c){printf("yes");}
            else{printf("no");}

    }


}
