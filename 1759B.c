#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,sum1,x,sum;
    scanf("%d", &tst);
    while(tst--){
            int arr[1000];
        int sum2=0;int tsum=0,c=0;
        scanf("%d %d", &n, &sum1);
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            sum2+=x;
        }
        sum=sum1+sum2;

        for(int i=1;tsum<=sum;i++){
                tsum+=i;
            if(tsum==sum){c=1;}
        }
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){c=0; break;}
        }

        if(c==1) printf("YES\n");
        else printf("NO\n");
    }
}
