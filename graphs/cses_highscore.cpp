#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX=5009;
vector<vector<pair<ll,ll> > > adj(MAXX);
vector<vector<ll> >edges;
ll dist[MAXX];
ll vis[MAXX];
ll inf=INT_MAX;

void addEdge(int u,int v, int w){
    adj[u].push_back({v, w});
}

void bellman(int src, int n){
    dist[src]=0;

    for(int i=0;i<n;i++){
        for(auto edge:edges){
            int u=edge[0], v=edge[1], w=edge[2];
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(auto edge:edges){
            int u=edge[0], v=edge[1], w=edge[2];
            if(dist[v]>dist[u]+w){
                dist[v]= -inf;
            }
        }
    }
}

int main(void){
    ll n,m,e1,e2,w;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        dist[i]=INT_MAX;
    }
    for(int i=0;i<m;i++){
        cin>>e1>>e2>>w;
        adj[e1].push_back({e2, (w*(-1))});
        edges.push_back({e1,e2, w*(-1)});
    }
    bellman(1,n);
    if(dist[n]== (-inf)) cout<<-1<<endl;
    else{
        cout<<dist[n]*(-1)<<endl;
    }
}
/*
if(!vis[u][v]){
    vis[u][v]=1;
    pq.push({u,v});
    dist[u][v]=dist[x][y]+1;
}
*/
