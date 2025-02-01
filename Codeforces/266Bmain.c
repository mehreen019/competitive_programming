#include<stdio.h>

int main(void){
    int tst, time, j, i;
    char chi[50];
    scanf("%d %d", &tst, &time);
    scanf("%s", chi);
    do{
            for(i=0; i<=tst; )
    {
        if(chi[i]=='B' && chi[i+1]=='G'){
            chi[i]='G';
            chi[i+1]='B';
            i+=2;
        }else{i++;}
        //skipping 2 lines if they are g and b but skipping one line if both are g or b
    }
    time--;
    }while(time>0);


    printf("%s", chi);
    return 0;

}
