#include<bits/stdc++.h>
using namespace std;
const int sz=510;
char r[sz][sz];
bool vis[sz][sz]={{0}};
int n,m,query=0,tx,ty;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool checker(int u,int v){
    if(u>=0 && u<n && v>=0 && v<m && !vis[u][v]) return true;
    else return false;
}

bool present(int u,int v){
    if(r[u][v]!='X' && r[u][v]!='#' && u>=0 && u<n && v>=0 && v<m) return true;
    return false;
}

void bfs(int x,int y){
    queue<pair<int,int>> q;
    query--;
    vis[x][y]=true;
    q.push({x,y});
    while(!q.empty() && query>0){
        int cou=0;
        auto t=q.front();
        q.pop();
        int u=t.first, v=t.second;
        for(int i=0;i<4;i++){
            int tu=u+dx[i];
            int tv=v+dy[i];

            if(checker(tu,tv)){
                if(r[tu][tv]=='X' || r[tu][tv]=='#') continue;

                vis[tu][tv]=true;
                q.push({tu,tv});
                query--;
                if(query<=0) break;
            }
        }
        //cout<<u<<v<<" "<<cou<<endl;
        if(query<=0){
            break;
        }
    }
}

int main(void){
    int k,dot=0;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>r[i][j];
            vis[i][j]=false;
            if(r[i][j]=='.'){
                tx=i; ty=j;
                dot++;
            }
        }
    }
    query=dot-k;
    while(query>0){
        bfs(tx,ty);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]) cout<<'.';
            else{
                if(r[i][j]=='#') cout<<'#';
                else cout<<'X';
            }
        }
        cout<<endl;
    }
}
