#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int sz=505;
map<ll, list<pair<int,int>>> adj;
ll dist[sz+1];
bool visit[sz+1];

void addEdge(ll u, ll v,ll w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

void djikstra(ll src){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();

        if(visit[cur.second]==1) continue;
        else visit[cur.second]=1;

        for(auto &it: adj[cur.second]){
            if(dist[it.first]> dist[cur.second]+ it.second){
                dist[it.first]= dist[cur.second]+ it.second;
                pq.push({dist[it.first], it.first});
            }
        }
    }
}

int main(void){
    int n,m,ortst;
        for(int i=0;i<sz;i++){
            dist[i]=INT_MAX;
            visit[i]=0;
        }

        //memset(dist,INT_MAX,sizeof(dist));
        cin>>n;
        int a,b,w,src,q;
        for(int i=0;i<n;i++){
            cin>>a>>b>>w;
            addEdge(a,b,w);
        }
        cin>>src>>m;
        djikstra(src);
        for(int i=0;i<m;i++){
            cin>>q;
            if(!visit[q]){
                cout<<"NO PATH"<<endl;
            }
            else{
                cout<<dist[q]<<endl;
            }
        }
        return 0;
}
