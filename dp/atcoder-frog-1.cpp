#include<bits/stdc++.h>
using namespace std;
const int MAXX=200005;
int dp[MAXX];
int r[MAXX];

int solve(int n){
    if(dp[n]!=-1){ return dp[n];}
    else if(n==1) return 0;

    int p1=INT_MAX,p2=INT_MAX;
    p1=solve(n-1) + abs(r[n]-r[n-1]);
    if(n>2) p2=solve(n-2) + abs(r[n]-r[n-2]);

    //cout<<n<<" "<<p1<<" "<<p2<<endl;
    return dp[n]=min(p1,p2);
}

int main(void){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>r[i];
    }
    int ans = solve(n);
    cout<<ans<<endl;
}
