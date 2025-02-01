#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m, num=0;
        bool ok=1;
        cin>>n>>m;
        vector<vector<int> > v(n, vector<int>(m));
        map<int, int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++){
            sort(v[i].begin(), v[i].end());
            mp[v[i][0]]=i;
        }
        sort(v.begin(), v.end());
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //cout<<v[j][i]<<" "<<j<<" "<<i<<endl;
                if(num==v[j][i]){ num++; }
                else{ ok=0; break; }
            }
            if(!ok) break;
        }
        if(!ok) cout<<-1<<endl;
        else{
            for(auto it: mp){
                cout<<it.second + 1<<" ";
            }
            cout<<endl;
        }
    }
}
