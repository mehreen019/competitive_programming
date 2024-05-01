#include<stdio.h>
 int main(void){
    int i,j, d1,d2, x,y;
    d1=0; d2=0;
    int arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1){
                x=j; y=i;
            }
        }
    }
    if(x>3){d1=x-3;}
    else if(x<3) {d1=3-x;}
    if(y>3){d2=y-3;}
    else if(y<3){d2=3-y;}
    printf("%d", d1+d2);
    return 0;
 }
