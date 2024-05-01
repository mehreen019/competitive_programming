#include<bits/stdc++.h>
using namespace std;
bool visit[8][8]={{0}};
ll ans[8][8]={{0}};
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void bfs(string s1, string s2){
    queue<pair<int,int>>q;
    int x1= s1[0]-'a', y1= s1[0]-'0'-1, x2=s2[0]-'a', y2= s2[0]-'0'-1;
    q.push(make_pair(x1,y1));
    ans[x1][y1]=0;
    visit[x1][y1]=1;
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        int x=cur.first, y=cur.second;
        for(int i=0;i<4;i++){
            int t1=x+dx[i];
            int t2=y+dy[i];

            if(t1<8 && t1>=0 && t2<8 && t2>=0 && !visit[t1][t2]){
                ans[t1][t2]=ans[x][y]+1;
                visit[t1][t2]=1;
                q.push(make_pair(t1,t2));
            }
        }
        if(visit[x2][y2]) break;
    }
}
int main(void){
    string s1, s2;
    while(cin>>s1>>s2){
        memset(visit,0,sizeof(visit));
        memset(ans,0,sizeof(ans));
        bfs(s1, s2);
        int x2=s2[0]-'a', y2= s2[0]-'0'-1;
        cout<<ans[x2][y2]<<endl;
    }
}
