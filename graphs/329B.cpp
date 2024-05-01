#include<bits/stdc++.h>
using namespace std;
const int sz=1005;
char r[sz][sz];
bool vis[sz][sz]={{0}};
int playerDist[sz][sz];
vector<pair<int,int>> loc;
int srcx, srcy ,arrn,arrm,endx,endy;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int ans=0;

bool checker(int u,int v){
    if(u>=0 && u<arrn && v>=0 && v<arrm && !vis[u][v] && r[u][v]!='T') return true;
    else return false;
}

void bfs(){
    bool found=0;
    queue<pair<int,int>> q;
    vis[endx][endy]=true;
    playerDist[endx][endy]=0;
    q.push({endx,endy});
    while(!q.empty()){
        auto t=q.front();
        q.pop();
        int u=t.first, v=t.second;
        //if((r[v][u]<=st || r[v][u]>'Z') && (r[v][u]!='#'))cout<<u<<v<<" "<<r[u][v]<<" "<<dist[u][v]<<endl;
        for(int i=0;i<4;i++){
            int tu=u+dx[i];
            int tv=v+dy[i];

            if(checker(tu,tv)){
                vis[tu][tv]=true;
                playerDist[tu][tv]=playerDist[u][v]+1;
                //if(r[tu][tv]=='E'){ found=1; break;}
                q.push({tu,tv});
                //cout<<tu<<tv<<" "<<r[tu][tv]<<" "<<playerDist[u][v]<<endl;
            }
        }
        //if(found) break;
    }
}


int main(void){
    int tst,n,m,ortst;
        int cou=0;
        cin>>n>>m;
        arrn=n;
        arrm=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
                vis[i][j]=false;
                playerDist[i][j]=INT_MAX;
                if(r[i][j]=='S'){
                    srcx=i;
                    srcy=j;
                }
                if(r[i][j]>='1' && r[i][j]<='9'){
                    loc.push_back({i,j});
                }
                if(r[i][j]=='E'){
                    endx=i;
                    endy=j;
                }
            }
        }
        bfs();
        for(int i=0;i<loc.size();i++){
            int u=loc[i].first;
            int v=loc[i].second;

            if(playerDist[u][v]<=playerDist[srcx][srcy]) ans+= r[u][v]-'0';
        }
        cout<<ans<<endl;
}
