#include <stdio.h>

int main()
{
    int tst, n;
    char name[10];
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d", &n);
        scanf("%s", &name);

        if(n!=5){
            printf("no");}
        if(n==5){for(int j=0; j<n; j++){
            if (name[j]=='T' || name[j]=='i' || name[j]=='m' || name[j]=='u' || name[j]=='r' ) continue;
            else{
                printf("no\n");
            }
        } printf("yes\n");}}


    return 0;
}

