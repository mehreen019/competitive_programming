#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int inf=1e18;

vector<int>dp(maxx);

int solve(int n, int prev, int* r, int lie){
    if(n<=0) return 1;
    else if(dp[n]!=-1) return dp[n];


}

int32_t main(void){
    int tst=1;
    cin>>tst;
    sieve();
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            dp[i]=-1;
        }
        int ans=solve(n,0,r,0) + solve(n-1,0,r,0);
        cout<<ans<<endl;
        dp.clear();
    }
}
