#include<bits/stdc++.h>
#define int long long
const int maxx=100015;
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,x;
        cin>>n>>x;
        int cost[n+1], happ[n+1], sum=0, ans=0;
        for(int i=0;i<n;i++){
            cin>>cost[i]>>happ[i];
            sum+=happ[i];
        }
        vector<int> dp(maxx, 1e10);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=sum-happ[i];j>=0;j--){
                if(dp[j]<1e10 && dp[j]+cost[i]<=i*x){
                    dp[j+happ[i]]=min(dp[j+happ[i]], dp[j]+cost[i]);
                    ans=max(ans, j+happ[i]);
                }
            }
        }
        cout<<ans<<endl;
    }
}
