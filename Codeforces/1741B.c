#include<stdio.h>
int main(void){
    int tst, n;
    scanf("%d", &tst);
    while(tst--){
     scanf("%d", &n);
     if(n==2){printf("2 1");}
     else if(n==3){printf("-1");}
      else{for(int i=n;i>=n-1;i--){printf("%d ", i);}
        for(int i=1;i<n-1;i++){printf("%d ", i);}}
        printf("\n");
    }
}
