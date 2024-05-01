#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX=200005;
ll dp[105][MAXX];
ll val[105];
ll weight[105];

ll solve(int k,int n){
    if(dp[n][k]!=-1){ return dp[n][k];}
    else if(n==0) return 0;
    else if(k<=0) return 0;

    ll p=INT_MIN, p1=INT_MIN;
    if(k-val[n]>=0){ p1=solve(k-val[n], n-1); p=max(p, p1+weight[n]); }
    ll p2=solve(k, n-1);  p=max(p, p2);

    //cout<<n<<" "<<p1<<" "<<p2<<" "<<p<<endl;
    return dp[n][k]=p;
}

int main(void){
    memset(dp, -1, sizeof(dp));
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>val[i]>>weight[i];
    }
    solve(k,n);
    cout<<dp[n][k]<<endl;
}
