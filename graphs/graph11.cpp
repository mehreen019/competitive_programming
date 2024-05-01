//if the problem had been to traverse using only 1 commando

#include<bits/stdc++.h>
#define ll long long
#define maxx 105
using namespace std;

bool visit[maxx];
map<ll, list<ll>> adj;
//vector<ll> r;
ll ans=0;
bool found=0;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(ll n,ll src, ll dest){
    if(visit[n]!=0) return;
    else if(n==dest){ found=1; return;}
    else if(adj[n].empty()){ return;}


    visit[n]=true;

    for(auto it=adj[n].begin();it!=adj[n].end();it++){
        //cout<<*it;
        if(visit[*it]==0){
            ans++;
            bfs(*it,src,dest);
            if(found) return;
            else{ ans++;}
        }
    }
}

int main(void){
    ll h,r,tst,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        for(int i=0;i<=maxx;i++){
            visit[i]=false;
        }
        ans=0;
        found=false;
        cin>>h>>r;
        ll e1,e2,t,b,e;
        for(int i=0;i<r;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);
        }
        cin>>b>>e;
        bfs(b,b,e);
        cout<<"Case "<<ortst-tst<<": "<<ans<<endl;

        for(int i=0;i<h;i++){
            adj[i].clear();
        }
    }
}
