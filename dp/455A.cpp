#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX=200005;
ll dp[MAXX];
ll r[MAXX];

ll solve(int n){
    if(dp[n]!=-1){ return dp[n];}
    else if(n<=0) return 0;

    ll p=INT_MIN;

    if(n-1>=0){ p=max(p, solve(n-1)); }
    if(n-2>=0){ p=max(p, solve(n-2)+r[n]); }
    else p=max(p, r[n]);

    //cout<<n<<" "<<p1<<endl;
    return dp[n]=p;
}

int main(void){
    memset(dp, -1, sizeof(dp));
    ll n,k,num=-1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        r[k]+=k;
        num=max(num, k);
    }
    ll ans = solve(num);
    cout<<ans<<endl;
}
