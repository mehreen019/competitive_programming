#include<stdio.h>
int main(void){
    int tst,a,b;
    scanf("%d", &tst);
    while(tst--){int cou=0;
        scanf("%d %d", &a, &b);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==1){cou++;}
    }
    if(cou>=1){printf("YES\n");}
    else{printf("NO\n");}
    }



}
