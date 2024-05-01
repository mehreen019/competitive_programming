#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const ll MAXX=1000000000+1;
ll dp[6][MAXX];
int val[5]={1,3,6,10,15};

ll solve(int k,int n){
    if(dp[n][k]!=-1){ return dp[n][k];}
    else if(n<0){ return 0;}
    else if(k==0){ return 0;}
    else if(k<0) return -1;

    //cout<<k<<" "<<val[n]<<endl;
    ll p=INT_MAX, p1=INT_MAX;
    if(k-val[n]>=0){ p1=solve(k-val[n], n);  p=min(p, p1+1); }
    if(n-1>=0){ ll p2=solve(k, n-1);  p=min(p, p2);}

    //cout<<n<<" "<<p1<<" "<<p2<<" "<<p<<endl;
    return dp[n][k]=p;
}

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        memset(dp, -1, sizeof(dp));
        ll n,k;
        cin>>n;
        solve(n,4);
        cout<<dp[4][n]<<endl;
    }
}
