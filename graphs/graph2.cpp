#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cou=0;
char r[510][510];
bool visit[510][510]={{0}};
ll ans[510][510];

void bfs(int n,int m,int u,int v){
    if(visit[u][v]) return;
    else if(r[u][v]=='*') return;

    visit[u][v]=1;
    //cout<<u<<v<<" "<<cou<<endl;

    if(u+1<n) bfs(n,m, u+1,v);
    if(v+1<m) bfs(n,m, u,v+1);
    if(u-1>=0) bfs(n,m, u-1,v);
    if(v-1>=0) bfs(n,m, u,v-1);
    if(u-1>=0 && v-1>=0) bfs(n,m, u-1,v-1);
    if(u+1<n && v+1<m) bfs(n,m, u+1,v+1);
    if(u-1>=0 && v+1<m) bfs(n,m, u-1,v+1);
    if(u+1<n && v-1>=0) bfs(n,m, u+1,v-1);
}

int main(void){
    int n,m,q;
    //cin>>tst;
    while(1){
        cin>>n>>m;
        if(m==0) break;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
                visit[i][j]=0;
            }
        }
        cou=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i][j]=='@'){
                    if(visit[i][j]!=1){
                        bfs(n,m,i,j);
                        cou++;
                    }
                }
            }
        }
        cout<<cou<<endl;
    }
}

//12, 02, 11, 22, 13
