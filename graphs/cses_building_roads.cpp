#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxx=200005;

bool vis[maxx];
map<ll, list<ll>> adj;
vector<pair<ll,ll>> pos;
ll ans=0;
bool found=0;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(ll n){
    if(vis[n]!=0) return;
    else if(adj[n].empty()){ return;}

    vis[n]=true;

    for(auto it=adj[n].begin();it!=adj[n].end();it++){
        if(vis[*it]==0){
            bfs(*it);
        }
    }
}

int main(void){
    ll n,k,tst,ortst;
    for(int i=0;i<=maxx;i++){
            vis[i]=false;
    }
    cin>>n>>k;
    ll e1,e2,t,b,e;
    for(int i=0;i<k;i++){
        cin>>e1>>e2;
        addEdge(e1,e2);
    }
    bfs(1);
    vis[1]=true;
    for(int i=1;i<=n;i++){
        if(!vis[i]){ bfs(i); pos.push_back({1,i}); }
    }
    cout<<pos.size()<<endl;
    for(int i=0;i<pos.size();i++){
        cout<<pos[i].first<<" "<<pos[i].second<<endl;
    }
}
