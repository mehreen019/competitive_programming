#include<stdio.h>
int main(void){
    int tst,n;
    scanf("%d", &tst);
    while(tst--){ int cou=0;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    //a=arr[i]; arr[i]=arr[j]; arr[j]=arr[i];
                    cou++;
                }
            }
        }
        if(cou>=1){printf("NO\n");}
        else{printf("YES\n");}

    }


}
