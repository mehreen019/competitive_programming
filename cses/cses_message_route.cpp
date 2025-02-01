#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int sz=200010;
bool vis[sz]={0};
map<ll, list<ll>> adj;
int dist[sz+1]={0},n;
vector<vector<ll>> ans(sz+1);
bool found=0;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(int k){
    queue<ll> q;
    vis[k]=true;
    dist[k]=0;
    q.push(k);
    while(!q.empty()){
        ll t=q.front();
        q.pop();
        //if((r[v][u]<=st || r[v][u]>'Z') && (r[v][u]!='#'))cout<<u<<v<<" "<<r[u][v]<<" "<<dist[u][v]<<endl;

        for(auto it=adj[t].begin();it!=adj[t].end();it++){
            //cout<<t<<" and the adjacent are: "<<*it<<endl;
            if(vis[*it]==0){
                q.push(*it);
                vis[*it]=true;
                dist[*it]=dist[t]+1;
                //vector
                for(int i=1;i<ans[t].size();i++){
                    ans[*it].push_back(ans[t][i]);
                }
                ans[*it].push_back(t);
            }
        }
    }
}

int main(void){
    int m;
    cin>>n>>m;
    for(int i=0;i<n+3;i++){
            vis[i]=false;
            ans[i].push_back(-1);
    }
    found=false;
    ll e1,e2;
    for(int i=0;i<m;i++){
        cin>>e1>>e2;
        addEdge(e1,e2);
    }
    bfs(1);
    if(dist[n]==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<ans[n].size()<<endl;
        for(int i=1;i<ans[n].size();i++){
            cout<<ans[n][i]<<" ";
        }
        cout<<n<<endl;
    }
}

