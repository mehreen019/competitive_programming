#include<stdio.h>

int main(void){
    int tst,a,b, arr[100],sum,cou,sou;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        sum=0;
        scanf("%d", &a);
        int j=0;
        while(a>0){scanf("%d", &arr[j]);
                    sum+=arr[j];j++;
                    a--;}
        if(sum%2==0){
            if(a%2){j--;
            while(j>-1){if(arr[j]==1)cou++;
                        if(arr[j]==2)sou++;
                        j--;}
            if(cou==sou){printf("YES");}
            else{printf("NO");}
            }


        }
        else{printf("NO");}

    }


}
