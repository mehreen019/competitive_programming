#include<stdio.h>
#include<stdlib.h>
int main(void){
    int tst,n,x,y;
    scanf("%d", &tst);
    while(tst--){int sum1=0, sum2=0;
        scanf("%d", &n);
        int p[n],q[n];
        for(int i=0; i<n;i++){
            scanf("%d %d", &x, &y);
            if(x>y){p[i]=x; q[i]=y; }
            else{p[i]=y; q[i]=x;   }
        }
       sum1+=p[0];
        for(int i=0;i<n-1;i++){
            sum1+=abs(p[i+1]-p[i]);
        }
        for(int i=0;i<n;i++){ sum2+=q[i]*2;
            printf("%d ", q[i]);
        }
        printf("\n%d\n", sum1);
    }


}
