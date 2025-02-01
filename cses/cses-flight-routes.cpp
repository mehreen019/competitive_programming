#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int sz=2e5 + 5;
//map<ll, list<pair<ll,ll>>> adj;
vector<vector<pair< int,int> > >adj(sz);
priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
priority_queue<ll> pqMax[sz];
bool vis[sz]={0};

void addEdge(int u, int v,int w){
    adj[u].push_back({v,w});
    //adj[u] = {v,w};
}

void shortest(int src, int k){
    pqMax[src].push(0);
    pq.push({0,src});
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();

        if(cur.first > pqMax[cur.second].top()) continue;
        for(auto &it: adj[cur.second]){
            ll temp = cur.first + it.second;
            if(pqMax[it.first].size()<k){
                pqMax[it.first].push(temp);
                pq.push({temp, it.first});
            }
            else if(pqMax[it.first].top() > temp){
                pqMax[it.first].pop();
                pqMax[it.first].push(temp);
                pq.push({temp, it.first});
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int tst,n,m,k,q,ortst;
        //memset(dist,INT_MAX,sizeof(dist));
        cin>>n>>m>>k;
        int a,b,w,srcc;
        for(int i=0;i<m;i++){
            cin>>a>>b>>w;
            addEdge(a,b,w);
            //addEdge(b,a,w);
        }
        shortest(1,k);
        stack<ll> ans;
    while(!pqMax[n].empty()){
        ans.push(pqMax[n].top());
        pqMax[n].pop();
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;

}
