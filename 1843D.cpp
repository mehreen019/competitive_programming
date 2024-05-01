#include<bits/stdc++.h>
#define ll long long
#define maxx 200001
using namespace std;

bool v[maxx];
map<ll,list<ll>> adj;
vector<ll> cou(maxx,0);

void addEdge(ll u, ll v){
    adj[u].push_back(v);
    //cout<<adj[u]<<endl;
}

int dfs(ll n){
    ll ans =0;

    //cout<<adj[n].size()<<" ";
    if(cou[n]!=0) return cou[n];
    else if(adj[n].size()==1 && n!=1) return cou[n]=1 ;

    v[n]= true;
    for(auto it=adj[n].begin(); it!=adj[n].end(); it++){
        if(!v[*it]) ans+=dfs(*it);
        //cout<<adj[*it]<<" ";
    }
    cou[n]= ans;
    return cou[n];
}

int main(void){
    ll tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll e1,e2;
        for(int i=0;i<n-1;i++){
            cin>>e1>>e2;
            addEdge(e1, e2);
            addEdge(e2, e1);
        }
        dfs(1);

        cin>>m;
        while(m--){
            cin>>e1>>e2;
            cout<<cou[e1]*cou[e2]<<endl;
        }
        for(int i=1;i<=n;i++){
            adj[i].clear();
            v[i]=0;
            cou[i]=0;
        }

    }
}
