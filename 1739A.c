#include<stdio.h>
int main(void){
     int tst,a,b;
     scanf("%d",&tst);
     while(tst--){
        scanf("%d %d", &a,&b);
        if(a==2 && b==3){printf("2 2\n");}
        else if(a==3 && b==2){printf("2 2\n");}
        else if(a==3 && b==3){printf("2 2\n");}
        else{printf("%d %d\n", a,b);}
     }
}



