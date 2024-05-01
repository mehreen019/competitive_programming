#include<stdio.h>
int main(void){
    int n,m,i,j,x,k=0;
    scanf("%d %d", &n,&m);
    int s[n][m]; int h[100];
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &s[i][j]);
        }
    }
    //i=0;j=0;
    for(j=0;j<m;j++){
            if(s[0][j]>s[1][j]){x=s[0][j]; h[k]=1;}
            else if(s[0][j]==s[1][j]){x=s[1][j]; h[k]=0;}
            else if(s[0][j]<s[1][j]){x=s[1][j]; h[k]=2;}
        for(i=0;i<n;i++){
            if(x<s[i+1][j]){x=s[i+1][j]; h[k]=i+2;}
        }k++;
    }
    for(i=0;i<=k;i++){
        printf("%d", h[i]);
    }
}
