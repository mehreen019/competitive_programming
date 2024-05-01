#include<bits/stdc++.h>
#define ll long long
#define maxx 200005
using namespace std;

bool vis[maxx];
map<ll, list<ll>> adj;
ll ice[maxx];
ll ans=0,minn=INT_MAX;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(ll n){
    if(vis[n]!=0) return;
    else if(adj[n].empty()){ return;}

    vis[n]=true;

    for(auto it=adj[n].begin();it!=adj[n].end();it++){
        if(vis[*it]==0){
            minn = min(minn, ice[*it]);
            dfs(*it);
        }
    }
}

int main(void){
    ll n,k,tst,ortst;
        for(int i=0;i<=maxx;i++){
            vis[i]=false;
        }
        ans=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>ice[i];
        }
        ll e1,e2,t,b,e;
        for(int i=0;i<k;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);
        }
        for(ll i=1;i<=n;i++){
            if(!vis[i]){ minn=min(minn, ice[i]); dfs(i); ans+=minn; minn=INT_MAX;}
        }
        cout<<ans<<endl;
}
