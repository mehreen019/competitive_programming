#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char st[1000];
    scanf("%s", st);
    int l=strlen(st);
    int x=isupper(st[0]);
    if(x==1){printf("%s", st);}
    else if(x==0){
        st[0]=toupper(st[0]);
        //modifying the already existing letter to a capital one
        printf("%s", st);
    }

    return 0;
}
