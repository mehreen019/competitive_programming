#include<bits/stdc++.h>
#define ll long long
#define maxx 20005
using namespace std;

int visit[maxx];
map<ll, list<ll>> adj;
ll red=0,black=0;

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

ll bfs(ll n){
    long long int lykan_num=0,vampire_num=0;
    queue<int>q;

    q.push(n);
    visit[n]=1;
    ++lykan_num;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto it=adj[n].begin();it!=adj[n].end();it++)
        {   if(visit[*it]==0){
                q.push(*it);

                if(visit[n]==1) //assigning type to each node.
                {
                    visit[*it]=2;
                    ++vampire_num;
                }
                else
                {
                    visit[*it] = 1;
                    ++lykan_num;
                }
            }
        }
    }

    long long int mx = max(vampire_num,lykan_num);
    return mx;
}

int main(void){
    ll n,m,tst,ortst,t=1;
    cin>>tst;
    ortst=tst;
    while(tst--){
        memset(visit,0,sizeof(visit));
        for(int i=0;i<maxx;i++){
            adj[i].clear();
        }
        cin>>n;
        ll e1,e2,ans=0;
        set<ll> s;
        for(int i=0;i<n;i++){
            cin>>e1>>e2;
            addEdge(e1,e2);

        }
        for(int i=0;i<maxx;i++){
            if(visit[i]==0 && !adj[i].empty()){
                ans+=bfs(i);
            }
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
        red=0; black=0; t++;
    }
}
