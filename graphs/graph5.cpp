#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cou=0;
char r[25][25];
bool visit[25][25]={{0}};
ll ans[25][25]={{-1}};

void bfs(int n,int m,int u,int v){
    if(visit[u][v]) return;
    else if(r[u][v]=='#' || r[u][v]=='m') return;

    visit[u][v]=1;
    //int t=w+1;

    if(u+1<n && !visit[u+1][v] && (r[u][v]!='#' && r[u][v]!='m')){ ans[u+1][v]=min(ans[u][v]+1,ans[u+1][v]); bfs(n,m, u+1,v);}
    if(v+1<m && !visit[u][v+1] && (r[u][v]!='#' && r[u][v]!='m')){ ans[u][v+1]=min(ans[u][v]+1,ans[u][v+1]); bfs(n,m, u,v+1);}
    if(u-1>=0 && !visit[u-1][v] && (r[u][v]!='#' && r[u][v]!='m')){ ans[u-1][v]=min(ans[u][v]+1,ans[u-1][v]); bfs(n,m, u-1,v);}
    if(v-1>=0 && !visit[u][v-1] && (r[u][v]!='#' && r[u][v]!='m')){ ans[u][v-1]=min(ans[u][v]+1,ans[u][v-1]); bfs(n,m, u,v-1);}
}

int main(void){
    int tst,n,m,q,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        cin>>n>>m;
        pair<int,int> h;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
                visit[i][j]=0;
                if(r[i][j]=='h') { h.first=i; h.second=j; }
            }
        }
        ans[h.first][h.second]=0;
        //cout<<h.first<<h.second<<endl;
        ll res=0;
        bfs(n,m,h.first,h.second);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i][j]=='a' || r[i][j]=='b' || r[i][j]=='c'){ res=max(res,ans[i][j]);}
                // cout<<i<<j<<" "<<res<<endl;}
                cout<<ans[i][j]<<" ";
            }cout<<endl;
        }
        cout<<"Case "<<ortst-tst<<": "<<res<<endl;
        memset(visit,0,sizeof(visit));
        memset(ans,-1,sizeof(ans));
    }
}

//12, 02, 11, 22, 13
