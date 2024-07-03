#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX = 200005;
vector< vector<ll> > adj(MAXX);
int dist[MAXX];
bool vis[MAXX];
int all=0;
vector<int> ans;
priority_queue<pair<ll,ll>> pq;

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void djikstra(int k, int ww){
    stack<pair<ll,ll>> helper;
    //cout<<k<<endl;
    while(!pq.empty()){
        //cout<<"ok"<<endl;
        pair<ll,ll> cur = pq.top();
        pq.pop();
        ll node = cur.second;
        ll weight = cur.first;

        //cout<<node<<" "<<weight<<endl;
        if(vis[node]==1) continue;
        else vis[node]=1;

        all++;
        ans.push_back(node);

        int sz= adj[node].size();
        for(int i=0;i<sz;i++){
            int con=adj[node][i];
            //cout<<con<<" ";
            if(adj[con].size()%2){
                //cout<<"odd"<<endl;
                while(pq.top().second!=con && !pq.empty()){
                    //cout<<pq.top().second<<" ";
                    helper.push(pq.top());
                    pq.pop();
                }
                if(!pq.empty()) pq.pop();
                while(!helper.empty()){
                    pq.push(helper.top());
                    helper.pop();
                }
            }
            else{
                //cout<<"even"<<endl;
                pq.push({dist[con], con});
            }
        }
    }
}

int main(void){
    int tst, ortst;
    cin>>tst;
    while(tst--){
        int n,m, start=INT_MIN, idx=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>dist[i];
        }
        int e1,e2,w,q;
        for(int i=0;i<n-1;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);
        }
        for(int it=1; it<=n;it++){
            //cout<<it<<" "<<adj[it].size()<<endl;

            if(adj[it].size()%2){
                //cout<<"okk"<<endl;
                start=max(start, dist[it]);
                if(dist[it]==start){ idx=it; }
                pq.push({dist[it], it});
                //cout<<dist[it]<<" "<<it<<endl;
            }
        }
        djikstra(idx, start);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

        for(int i=0;i<=n;i++){
            adj[i].clear();
            vis[i]=0;
            dist[i]=0;
        }
        ans.clear();
    }
}


