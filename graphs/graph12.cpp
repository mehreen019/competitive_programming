#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int sz=105;
map<ll, list<pair<int,int>>> adj;
ll dist[sz]={INT_MAX};

void addEdge(ll u, ll v,ll w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

void shortest(ll src){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();
       // cout<<dist[cur.second]<<" ";
        for(auto &it: adj[cur.second]){

            if(dist[it.first]> dist[cur.second]+ it.second){
                dist[it.first]= dist[cur.second]+ it.second;
                pq.push({dist[it.first], it.first});
            }
        }
    }
}

int main(void){
    int tst,n,m,q,ortst;
    //cin>>tst;
    ortst=tst;
    while(tst--){
        for(int i=0;i<sz;i++){
            dist[i]=INT_MAX;
        }
        //memset(dist,INT_MAX,sizeof(dist));
        cin>>n>>m;
        int a,b,w;
        for(int i=0;i<m;i++){
            cin>>a>>b>>w;
            addEdge(a,b,w);
        }
        shortest(1);
        /*for(int i=0;i<n;i++){
            cout<<dist[n]<<" ";
        }*/
        cout<<"Case "<<ortst-tst<<": ";
        if(dist[n]==INT_MAX){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<dist[n]<<endl;
        }
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }
    }

}
