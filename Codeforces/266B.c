#include<stdio.h>

int main(void){
    int tst, time, j, i;
    char chi[50];
    scanf("%d %d", &tst, &time);
    scanf("%s", chi);
    do{for(i=1; i<=tst; i++)
    {
        if(chi[i-1]=='B' && chi[i]=='G'){
            chi[i-1]='G';
            chi[i]='B';
        }
    }
    time--;
    }while(time>0);


    printf("%s", chi);
    return 0;

}
