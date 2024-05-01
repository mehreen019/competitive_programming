#include<stdio.h>
int main(void){
 int tst,n;
 scanf("%d", &tst);
 for(int i=0; i<tst; i++){
    int sum1=0,sum2=0,k=0,m=0,t;
    char arr1[10000],arr2[10000];
    scanf("%d", &n);
    t=(n/2)-1;
       for(int j=1;j<=n; j++){
            while(t>0){
        if(j%2==1){sum1+=j;}
        t--;}
                    //arr2[k]=j; k++;}
        if(j%2==0){sum2+=j;
            arr1[m]=j;m++;}
    }
   // printf("%d %d", sum1,sum2);
    if((sum2-sum1)%2){printf("YES");}
            //printf("%d", arr1); printf("%d", arr2);}
    else{printf("NO");}
    //printf("%s", arr1); printf("%s", arr2);}
 }
}
