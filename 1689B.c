#include<stdio.h>
int main(void){
    int tst, n, a;
    scanf("%d", &tst);
    while(tst--){int cou=0;
        scanf("%d", &n);
        int r[n],s[n+1];
        for(int i=0;i<n;i++){
            scanf("%d", &r[i]);
        }
        for(int i=1;i<=n;i++){
            s[i-1]=i;
        }
        for(int i=0;i<n-1;i++){
                if(r[i]==s[i]){a=s[i];s[i]=s[i+1];s[i+1]=a; }
          }
          if(s[n-1]==r[n-1]){a=s[n-1];s[n-1]=s[n-2];s[n-2]=a;}
        for(int i=0;i<n;i++){
            if(r[i]==s[i])cou++;
        }
        if(n==1 && r[0]==1 ){printf("-1"); }
        else{
                for(int i=0;i<n;i++){
            printf("%d ", s[i]);
        }
        }
        printf("\n");
    }
}
