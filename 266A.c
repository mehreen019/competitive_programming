#include<stdio.h>

int main(void){
    int tst, sum=0, i;
    char str[50];
    scanf("%d", &tst);
    scanf("%s", str);
    for(i=1; i<=tst; i++){
        if(str[i-1]==str[i])
            sum++;
    }
    printf("%d", sum);
    return 0;


}
