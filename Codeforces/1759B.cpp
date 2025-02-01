#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,sum1,x,sum;
    scanf("%d", &tst);
    while(tst--){
            int arr[1000], i;
        int sum2=0; //int tsum=0,c=0;
        scanf("%d %d", &n, &sum1);
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            sum2+=arr[i];
        }
        sum=sum1+sum2;
        for(i=1;sum>0;i++){
                sum=sum-i;
        }
        if(sum==0) printf("YES %d %d\n",sum,i);
        else printf("NO %d %d\n",sum,i);
    }
}
