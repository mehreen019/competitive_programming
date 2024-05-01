#include<stdio.h>
int main(void){
    int tst,n,m; char arr[100][100];
    scanf("%d", &tst);
    while(tst--){ int cou1=0,cou2=0;
        scanf("%d %d", &n, &m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf(" %c", &arr[i][j]);
            }
        }
     for(int i=0;i<n;i++){if(arr[i][m-1]=='R')cou1++;}
         for(int j=0;j<m;j++){if(arr[n-1][j]=='D')cou2++;}
        printf("%d", cou1+cou2);
    }


}
