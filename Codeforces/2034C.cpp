#include<bits/stdc++.h>
#define pb push_back
#define pii pair<int, int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

const int maxx=1e5+9;
const int inf=2e18;
const int mod=1e9+7;

int n,m, dx[]={0,0,-1,+1}, dy[]={-1,+1,0,0};

int check(int i, int j, vector< vector<char>>& r, vector<vector<int>>& val, vector<vector<bool>>& vis){
    if(vis[i][j]==1){
        if(val[i][j]==-1) return -1;
        else return 1;
    }
    else if(r[i][j]=='?'){ vis[i][j]=1;  return val[i][j]=1;}
    else{
        vis[i][j]=1;

        if(r[i][j]=='L' && j-1>=0) return val[i][j]=check(i,j-1,r,val, vis);
        else if(r[i][j]=='R' && j+1<m) return val[i][j]=check(i,j+1,r,val, vis);
        else if(r[i][j]=='U' && i-1>=0) return val[i][j]=check(i-1,j,r,val, vis);
        else if(r[i][j]=='D' && i+1<n) return val[i][j]=check(i+1,j,r,val, vis);
    }
}

bool safe(int i, int j){
    if(i>=0 && i<n && j>=0 && j<m) return 1;
    else return 0;
}

int32_t main(void){

    fastio;

    int tst=1, ortst;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        vector< vector<char>> r(n, vector<char>(m));
        vector< vector<bool>> vis(n, vector<bool>(m,0));
        vector< vector<int>> val(n, vector<int>(m, 0));
        int ans=0,zero=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
            }
        }
        for(int i=0;i<m;i++){
            if(r[0][i]=='U'){ vis[0][i]=1; val[0][i]=-1;}
        }
        for(int i=0;i<m;i++){
            if(r[n-1][i]=='D'){ val[n-1][i]=-1; vis[n-1][i]=1;}
        }
        for(int i=0;i<n;i++){
            if(r[i][0]=='L'){ val[i][0]=-1; vis[i][0]=1;}
        }
        for(int i=0;i<n;i++){
            if(r[i][m-1]=='R'){ val[i][m-1]=-1; vis[i][m-1]=1;}
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && r[i][j]!='?') val[i][j]=check(i,j,r,val, vis);
            }
        }

        /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<val[i][j]<<" ";
            }
            cout<<endl;
        }*/

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(val[i][j]==1) ans++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && r[i][j]=='?'){
                    for(int k=0;k<4;k++){
                        if(safe(i+dy[k], j+dx[k]) && (r[i+dy[k]][j+dx[k]]=='?' || val[i+dy[k]][j+dx[k]]==1)){
                                val[i][j]=1;
                                ans++;
                                break;
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
}
/*
3 3
DRD
RUD
?RL
2 3
DL?
RU?
*/
