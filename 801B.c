#include<stdio.h>
int main(void){
    char x[101],y[101]; //int j[101];
    scanf("%s %s", x,y);
    for(int i=0; i<strlen(x); i++){
        if(y[i]>x[i]){printf("-1"); return 0;}
        if(y[i]==x[i]){y[i]='z';}
    }
    printf("%s", y);
}
