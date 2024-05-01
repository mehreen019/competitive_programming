#include<stdio.h>
int main(void){
    int tst,cou; char arr[8][8],x;
    scanf("%d", &tst);
    while(tst--){cou=0;
        for(int i=0;i<8;i++){
         for(int j=0;j<8;j++){
            scanf("%d", &arr[i][j]);
         }
        }
      for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
            if(arr[i][j+1]==arr[i][j]){cou++; x=arr[i][j];}
        }}
    if(cou==8){printf("%c", x);}
    else{cou=0;}



    }
}
