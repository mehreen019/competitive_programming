#include<stdio.h>
int main(void){
    int tst, n;
    scanf("%d", &tst);
    while(tst--){
        int x=0,cou=0,y=0;
        scanf("%d", &n);
        int r[n];
        for(int i=0;i<n;i++){
            scanf("%d", &r[i]);
        }
        if(r[n-1]-r[n-2]<r[0]){ x=r[n-1]-r[n-2]; }
        else x=r[0];
        for(int i=0;i<n;i++){
                y=r[i];
            while(1){
                if(2*x>y) break;
                else{
                    y=y/2;
                    cou++;
                }

            }//printf("%d ", y);
        }
        printf("%d\n", cou);
    }
}
