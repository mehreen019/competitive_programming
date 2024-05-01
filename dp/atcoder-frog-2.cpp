#include<bits/stdc++.h>
using namespace std;
const int MAXX=200005;
int dp[MAXX];
int r[MAXX];

int solve(int n,int k){
    if(dp[n]!=-1){ return dp[n];}
    else if(n==1) return 0;

    int p1=INT_MAX;
    for(int i=1;i<=k && n-i>=1;i++){
        p1=min(p1, solve(n-i, k)+abs(r[n]-r[n-i]));
        //cout<<n<<" "<<p2<<" "<<p3<<endl;
    }
    //cout<<n<<" "<<p1<<endl;
    return dp[n]=p1;
}

int main(void){
    memset(dp, -1, sizeof(dp));
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>r[i];
    }
    int ans = solve(n,k);
    cout<<ans<<endl;
}
