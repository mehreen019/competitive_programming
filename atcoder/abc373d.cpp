#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=2e5+7;
int dp[maxx];
bool visited[maxx]={0};
vector<vector<pair<int, int> > > adj(maxx);

void dfs(int n, int val){
    if(visited[n]){ return;}

    dp[n]=val;
    visited[n]=1;
    for(auto it:adj[n]){
        //cout<<it.first<<" "<<it.second<<endl;
        if(visited[n]) dfs(it.first, val+it.second);
    }
}


int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int n,m,a,b,w, minn=0;
        cin>>n>>m;

        for(int i=0;i<=n;i++){
            visited[i]=0;
        }

        for(int i=0;i<m;i++){
            cin>>a>>b>>w;
            adj[a].pb({b,w});
            adj[b].pb({a, w*(-1)});
        }

        for(int i=1;i<=n;i++){
            if(!visited[i]) dfs(i, minn);
        }

        for(int i=1;i<=n;i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
}
