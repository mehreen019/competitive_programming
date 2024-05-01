#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXX=1e6+5;
vector< vector<int>> dp(105, vector<int>(MAXX, -1));
//ll dp[101][MAXX];
ll val[105];

ll solve(int k,int n){
    if(dp[n][k]!=-1){ return dp[n][k];}
    else if(n==0) return 0;
    else if(k<=0) return 0;

    ll p=INT_MAX, p1, p2;
    if(k-val[n]>=0){
        int temp= k/val[n];
        if(n-1>0 || (k- (val[n]*temp)==0) ){ p1=solve(k- (val[n]*temp), n-1); p=min(p, p1+temp);}
    }
    if(n-1>0){ p2=solve(k, n-1);  p=min(p, p2);}

    //cout<<n<<" "<<p1<<" "<<p2<<" "<<p<<endl;
    //if(p==INT_MIN) p=INT_MAX;
    return dp[n][k]=p;
}

int main(void){
    //memset(dp, -1, sizeof(dp));
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    solve(k,n);
    if(dp[n][k]==INT_MAX) cout<<-1<<endl;
    else cout<<dp[n][k]<<endl;
}
