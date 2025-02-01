#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9;
const int maxx=2e5+9;
const int inf=2e18;

int dp[maxx];

int coins(vector< pii >& vp, int k, int idx){
    if(k<=0) return 0;
    else if(idx<0) return -1;
    else if(dp[k]!=-1) return dp[idx];
    else{
        if(k>vp[idx].first){
            int used=min(k/vp[idx].first, vp[idx].second);
            int t=k-vp[idx].first*used;
            cout<<t<<" used coins: "<<used<<" gotten: "<<k<<endl;
            dp[k]=max(coins(vp, t, idx-1)+1,  coins(vp,k,idx-1));
        }
        else{
            dp[k]=coins(vp,k,idx-1);
        }
        return dp[k];
    }
}

int32_t main(void){
    int tst=1,ortst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        vector<pii> vp(n);
        memset(dp, -1, sizeof(dp));
        for(int i=0;i<n;i++){
            cin>>vp[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>vp[i].second;
        }
        int ans=coins(vp, k, n-1);
        cout<<ans<<endl;
    }
}
