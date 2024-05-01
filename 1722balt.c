#include<stdio.h>

int main(void){
    int tst, col, sum, j;
    char str1[100], str2[100];
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        sum=0;
        scanf("%d", &col);
        while(col--){
                scanf(" %c", &str1[j]);
                if(col==0)
                    break;
                }
        while(col--){
            scanf(" %c", &str2[j]);
            if(col==0)
                    break;}
        while(col--){
            if(str1[j]==str2[j]){sum++;}
            else if(str1[j]=='G' && str2[j]=='B'){
                sum++;
            }
            if(col==0)
                    break;
        }
        if(sum==col){printf("yes\n");}
        else{printf("NO\n");}
    }
    return 0;
}
