#include<bits/stdc++.h>
#define ll long long
#define maxx 105
using namespace std;

bool visit[maxx];
map<int, list<int>> adj;
int src_dist[maxx];
int dest_dist[maxx];

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(ll n, string s){
    queue<int> q;

    if(s=="src") src_dist[n]=0;
    else dest_dist[n]=0;
    q.push(n);
    visit[n]=true;
    while(!q.empty()){
        int t=q.front();
        q.pop();

        for(auto it=adj[t].begin();it!=adj[t].end();it++){
            if(!visit[*it]){
                if(s=="src") src_dist[*it]=src_dist[t]+1;
                else dest_dist[*it]=dest_dist[t]+1;
                q.push(*it);
                visit[*it]=true;
            }
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
            dest_dist[i]=0;
            src_dist[i]=0;
        }
        int ans=0;
        cin>>h>>r;
        ll e1,e2,t,b,e;
        for(int i=0;i<r;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);
        }
        cin>>b>>e;
        bfs(b,"src");
        for(int i=0;i<=h;i++){
            visit[i]=false;
        }
        bfs(e,"dest");
        cout<<"Case "<<ortst-tst<<": ";
        for(int i=0;i<h;i++){
            ans=max(ans, dest_dist[i]+src_dist[i]);
        }
        cout<<ans<<endl;
        for(int i=0;i<h;i++){
            adj[i].clear();
        }
    }
}
