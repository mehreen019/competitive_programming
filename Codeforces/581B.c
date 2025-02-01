#include<stdio.h>
int main(void){
    int n,a,cou=0,b;
    scanf("%d", &n);
    int arr[n],r[n];
    for(int i=0;i<n;i++){
        scanf("%d", &r[i]);
       // r[i]=arr[i];
    }
    for(int i=n;i>0;i--){
        for(int j=i-1;j>0;j--){
           if(cou=0){if(r[i]>r[j]){a=r[i];b=r[j];r[i]=0;r[j]=(a+1)-b;}
                        else{a=r[j];r[i]=0;r[j]=0; }cou++;}
          else{
            if(r[i]>r[j]){
                if(r[i]>a){a=r[i];r[i]=0;}
              b=r[j];  r[j]=(a+1)-b;}
            //else{r[i]=(a+1)-r[i];}
            }
            }
        }
    for(int i=0;i<n;i++){
        printf("%d ", r[i]);
    }
}
