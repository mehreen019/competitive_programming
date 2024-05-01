#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cou=0;
char r[25][25];
bool visit[25][25]={{0}};
ll ans[25][25]={{0}};
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void bfs(int n,int m,int u,int v){
    queue<pair<int,int>>q;
    q.push(make_pair(u,v));
    visit[u][v]=1;
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        int x=cur.first, y=cur.second;
        for(int i=0;i<4;i++){
            int t1=x+dx[i];
            int t2=y+dy[i];

            if(t1<n && t1>=0 && t2<m && t2>=0 && r[t1][t2]!='#' && r[t1][t2]!='m' && !visit[t1][t2]){
                ans[t1][t2]=ans[x][y]+1;
                visit[t1][t2]=1;
                q.push(make_pair(t1,t2));
            }
        }
    }
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
               // cout<<ans[i][j]<<" ";
            }//cout<<endl;
        }
        cout<<"Case "<<ortst-tst<<": "<<res<<endl;
        memset(visit,0,sizeof(visit));
        memset(ans,0,sizeof(ans));
    }
}

//12, 02, 11, 22, 13
