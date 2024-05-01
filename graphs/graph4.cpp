#include<bits/stdc++.h>
using namespace std;
const int sz=13;
char r[sz][sz];
bool visit[sz][sz]={{0}};
int dist[sz][sz];
int srcx, srcy ,arrn;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool checker(int u,int v){
    if(u>=0 && u<arrn && v>=0 && v<arrn && !visit[u][v]) return true;
    else return false;
}

int bfs(char st){
    for(int i=0;i<sz;i++)
     {
         for(int j=0;j<sz;j++)
         {
             visit[i][j]=false;
             dist[i][j]=INT_MAX;
         }
     }
    queue<pair<int,int>> q;
    visit[srcx][srcy]=true;
    dist[srcx][srcy]=0;
    q.push({srcx,srcy});
    while(!q.empty()){
        auto t=q.front();
        q.pop();
        int u=t.first, v=t.second;
        //if((r[v][u]<=st || r[v][u]>'Z') && (r[v][u]!='#'))cout<<u<<v<<" "<<r[u][v]<<" "<<dist[u][v]<<endl;
        if(r[u][v]==st){
            srcx=u; srcy=v;
            //cout<<dist[u][v]<<" ";
            return dist[u][v];
        }

        for(int i=0;i<4;i++){
            int tu=u+dx[i];
            int tv=v+dy[i];

            if(checker(tu,tv) ){

               //if((r[tv][tu]<st+1 && r[tv][tu]>='A') || r[tu][tv]!='#'){ WHY DOESN'T THIS WORK
                if( (r[tu][tv]>st && st<='Z') || (r[tu][tv]=='#') )
                 {
                     continue;
                 }
                visit[tu][tv]=true;
                dist[tu][tv]=dist[u][v]+1;
                q.push({tu,tv});
                cout<<tu<<tv<<" "<<r[tu][tv]<<" "<<dist[u][v]<<endl;
            }
        }

    }
    return -1;
}

int main(void){
    int tst,n,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        int cou=0;
        cin>>n;
        arrn=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
                visit[i][j]=false;
                dist[i][j]=INT_MAX;
                if(r[i][j]=='A'){
                    srcx=i;
                    srcy=j;
                }
                if(r[i][j]>='A' && r[i][j]<='Z') cou++;
            }
        }
        char c='B';
        int ans=0;
        for(int i=0;i<cou-1;i++){
            int cost= bfs(c);
            if(cost==-1){ans=-1; break;}
            ans+=cost;
            c++;
        }
        cout<<"Case "<<ortst-tst<<": ";
        if(ans!=-1 && cou!=0)cout<<ans<<endl;
        else cout<<"Impossible"<<endl;

    }
}
