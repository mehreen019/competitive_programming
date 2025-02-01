#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=1e5+10;
vector<vector<int> >adj(maxx);
bool visited[maxx]={0};
int dp[maxx]={0};

int dfs(int n){
    if(visited[n]) return dp[n];

    visited[n]=1;
    int ans=0;
    for(auto it:adj[n]){
        ans^=(1+dfs(it));
    }
    return dp[n]=ans;
}

int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int n,x,y;
        cin>>n;
        for(int i=0;i<n-1;i++){
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        int ans=dfs(1);
        if(ans) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
