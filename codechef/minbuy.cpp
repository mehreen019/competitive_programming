#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9;
const int maxx=2e5+9;
const int inf=2e18;

int dp[maxx];

int32_t main(void){
    int tst=1,ortst;
    cin>>tst;
    while(tst--){
        int n,k,t,coin=0, ans=0;
        cin>>n>>k;
        vector<int> vp(n);
        for(int i=0;i<n;i++){
            cin>>vp[i];
        }
        for(int i=0;i<n;i++){
            cin>>t;
            vp[i]*=t;
        }
        sort(vp.begin(), vp.end());
        for(int i=n-1;i>=0;i--){
            coin+=(vp[i]);
            ans++;
            if(coin>=k) break;
        }
        if(ans>=n && coin<k) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}
