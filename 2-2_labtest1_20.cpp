#include<bits/stdc++.h>
using namespace std;
const int MAXX=55;
int graph[MAXX][MAXX];
vector<vector<pair<int,int> > > adj(MAXX);
int dist[MAXX];
bool vis[MAXX];

void addEdge(int u,int v, int w){
    adj[u].push_back({v, w});
}

void djikstra(int src, int n){
    for(int i=0;i<=n;i++){
        vis[i]=0;
        dist[i]=INT_MAX;
    }

    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >pq;
    pq.push({0,src});
    dist[src]=0;
    while(!pq.empty()){
        auto cur = pq.top();
        pq.pop();
        int node=cur.second, weight=cur.first;

        for(auto it: adj[node]){
            if(dist[it.first]> dist[node]+it.second){
                dist[it.first]= dist[node]+it.second;
                pq.push({dist[it.first], it.first});
            }
        }
    }
}

int main(void){
    int tst,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        int n,q,a,b, ans=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>graph[i][j];
                addEdge(i,j,graph[i][j]);
            }
        }
        cin>>q;
        while(q--){
            cin>>a>>b;
            djikstra(a,n);
            ans+=dist[b];
        }
        cout<<"Case #"<<ortst-tst<<" : "<<ans<<endl;

        for(int i=0;i<=n;i++){
            adj.clear();
        }
    }
}
