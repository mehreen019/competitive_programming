#include<bits/stdc++.h>
#define ll long long
#define maxx 20005
using namespace std;

int visit[maxx];
map<ll, list<ll>> adj;
//vector<ll> r;
ll red=0,black=0;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(ll n,int color){
    if(visit[n]!=0) return;
    else if(adj[n].empty()){ return;}

    visit[n]=color;
    if(color==1) red++;
    else if(color==2) black++;

    for(auto it=adj[n].begin();it!=adj[n].end();it++){
        if(visit[*it]==0){
            if(color==1){
                bfs(*it, 2);
            }
            else if(color==2){
                bfs(*it,1);
            }
        }
    }
}

int main(void){
    ll n,m,tst,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        cin>>n;
        ll e1,e2,t,mr=0,mb=0;
        set<ll> s;
        for(int i=0;i<n;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);

        }
        for(int i=0;i<maxx;i++){
            if(visit[i]==0 && !adj[n].empty()){
                bfs(i,1);
                mr+=red;
                mb+=black;
                red=0; black=0;
            }
        }
        cout<<"Case "<<ortst-tst<<": "<<max(mr,mb)<<endl;
        red=0; black=0;
        memset(visit,0,sizeof(visit));
        for(int i=0;i<maxx;i++){
            adj[i].clear();
        }
    }
}
