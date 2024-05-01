#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX= 200005;
vector<ll>a,b;
ll dp[MAXX];

ll solve(ll cur, ll cost, ll idx, ll m){
    if(dp[idx]!= LLONG_MAX && idx>m-1){ return dp[idx];}
    if(idx==0 || cur==0){
        //cout<<idx<<" "<<cost<<endl;
        return dp[idx]=min(dp[idx], cost+a[idx]);}
    else if(idx<=m-1){
        ll k=INT_MAX;
        k=min(solve(idx, cost+a[idx], idx-1, m), solve(cur, cost+b[idx], idx-1, m));

        cout<<idx<<" "<<k<<" "<<cost<<endl;
        return dp[idx]= min(dp[idx], min(k, cost+a[idx]));
    }
    else{

        ll k=INT_MAX;
        k=min(solve(idx, cost+a[idx], idx-1, m), solve(cur, cost+b[idx], idx-1, m));
        //cout<<idx<<" "<<k<<" "<<cost<<endl;
        return dp[idx]=min(dp[idx], k);
    }
}

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<=n;i++){
            dp[i]=LLONG_MAX;
        }

        ll x;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            cin>>x;
            b.push_back(x);
        }
        dp[n] = solve(n,0,n-1,m);
        cout<<dp[n]<<endl;

        a.clear();
        b.clear();
    }
}
