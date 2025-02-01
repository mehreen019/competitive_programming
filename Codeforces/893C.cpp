#include<bits/stdc++.h>
#define ll long long
#define maxx 200001
using namespace std;

bool vis[maxx];
map<ll, list<ll>> adj;
//vector<ll> r;
ll ans=INT_MAX;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
}

void dfs(ll n,ll* r){
    if(vis[n]) return;
    else if(adj[n].size()==0){ ans=r[n]; return;}

    vis[n]=true;
    ans=min(ans,r[n]);
    //cout<<ans<<" ";
    //if(adj[n].size()==1 && n!=1) return;

    for(auto it=adj[n].begin();it!=adj[n].end();it++){
        if(!vis[*it]) dfs(*it,r);
    }
}

int main(void){
    ll n,m,tc=0;
    cin>>n>>m;
    ll r[n+1];
    for(int i=1;i<=n;i++){
        cin>>r[i];
    }
    ll e1,e2;
    for(int i=0;i<m;i++){
        cin>>e1>>e2;
        addEdge(e1,e2);
        addEdge(e2,e1);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,r);
            tc+=ans;
            //cout<<tc<<" ";
            ans=INT_MAX;
        }
    }
    cout<<tc<<endl;
}
