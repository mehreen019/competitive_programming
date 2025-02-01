#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll INF = 1e15;

int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,m,k,a,b,c;
    cin>>n>>m>>k;
    ll dist[n+4][n+4];

	for(ll i=1; i <= n; ++i)
	{
        for(ll j = i+1; j <= n; ++j)
		{
			dist[i][j] = dist[j][i] = INF;

		}
	}

    while(m--){
        cin>>a>>b>>c;
        dist[a][b]=dist[b][a]=min(dist[a][b], c);
    }

    for(ll k=1;k<=n;++k){
        for(ll i=1;i<=n;++i){
            for(ll j=1;j<=n;++j){
                dist[i][j]=min(dist[i][k]+dist[k][j], dist[i][j]);
            }
        }
    }

   /* for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }*/
    while(k--){
        cin>>a>>b;
        if(dist[a][b]==INF) cout<<-1<<endl;
        else cout<<dist[a][b]<<endl;
    }
}
