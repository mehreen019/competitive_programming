#include<stdio.h>
int main(void){
    int tst,n,cou;
    char arr[100][100],x1,x2,y1,y2;
    scanf("%d", &tst);
    while(tst--){cou=0;
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            scanf(" %c", &arr[i][j]);
            if(arr[i][j]=='*'){if(cou==0){x1=i; y1=j;cou++;}
                                else{x2=i;y2=j;}}
            }
        }

        if(x1!=x2 && y1!=y2){arr[x1][y2]='*';
                             arr[x2][y1]='*';}
        else if(y1==y2){if(y1==n){arr[x1][y1-1]='*';
                             arr[x2][y2-1]='*';}
                             else{arr[x1][y1+1]='*';
                             arr[x2][y2+1]='*';}}
        else if(x1==x2){if(x1==n){arr[x1-1][y1]='*';
                             arr[x2-1][y2]='*';}
                             else{arr[x1+1][y1]='*';
                             arr[x2+1][y2]='*';}}
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            printf("%c ", arr[i][j]);}
            printf("\n");}
    }
}
