#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tie ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll INF=1e18;
const ll maxx= 2e5+5;

vector<bool> visit(maxx, 0);
map<ll, list<ll>> adj;
vector<ll> val(maxx,0);

int dfs(ll n){
    if(visit[n]!=0) return INT_MAX;

    visit[n]=1;
    int k=val[n], temp=-1;

    for(auto it: adj[n]){
        if(!visit[it])
         temp = dfs(it);

        if(n!=1) k=min( k+1, temp-1 );
        else k=temp;

        //cout<<n<<" "<<k<<" "<<temp<<endl;
    }

    return k;
}

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
    ll n,m, prev=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }

    for(int i=1;i<=n-1;i++){
        cin>>m;
        adj[m].push_back(i+1);
    }

    int ans = dfs(1);
    cout<<val[1]+ans<<endl;

    for(int i=0;i<=n;i++){
        val[i]=0;
        visit[i]=0;
        adj[i].clear();
    }
    }
}
