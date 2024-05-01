#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cou=0;
char r[510][510];
bool visit[510][510]={{0}};
ll ans[510][510];

void bfs(int n,int m,int u,int v){
    if(visit[u][v]) return;
    else if(r[u][v]=='#') return;

    visit[u][v]=1;
    if(r[u][v]=='C'){ cou++; }
    //vec.push_back(make_pair(u,v));

    if(u+1<n) bfs(n,m, u+1,v);
    if(v+1<m) bfs(n,m, u,v+1);
    if(u-1>=0) bfs(n,m, u-1,v);
    if(v-1>=0) bfs(n,m, u,v-1);
}

void searchh(int n,int m,int u,int v){
    bfs(n,m,u,v);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visit[i][j]) ans[i][j]=cou;
        }
    }
    cou=0;
    memset(visit,0,sizeof(visit));
}

int main(void){
    int tst,n,m,q,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        memset(ans,-1,sizeof(ans));
        cin>>n>>m>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
                visit[i][j]=0;
            }
        }
        int a,b;
        cout<<"Case "<<ortst-tst<<":"<<endl;
        while(q--){
            cin>>a>>b;
            a--; b--;
            if(ans[a][b]==-1){
                searchh(n,m,a,b);
                cout<<ans[a][b]<<endl;
            }
            else{
                cout<<ans[a][b]<<endl;
            }
        }
    }
}

//12, 02, 11, 22, 13
