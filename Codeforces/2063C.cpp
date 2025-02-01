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
        int n,a,b, m1=INT_MIN,m2=INT_MIN, mid1, mid2, ans=INT_MIN;
        cin>>n;

        vector<vector<int>> graph(n+5);
        map<int, int> mp;

        for(int i=0;i<n-1;i++){
            cin>>a>>b;
            mp[a]++;
            mp[b]++;
            graph[a].pb(b);
            graph[b].pb(a);
        }

        vector<pii> deg;
        for(auto it:mp){
            deg.pb({it.second, it.first});
        }

        sort(deg.begin(), deg.end(), greater<pii>());

        for(int i=0;i<2;i++){
            map<int, int> mpin;
            int del=deg[i].second;
            for(auto it: graph[del]){
                mpin[it]++;
            }

            for(int i=1;i<=n;i++){
                if(i==del) continue;

                if(mpin[i]) ans=max(mp[del]+mp[i]-2, ans);
                else ans=max(mp[del]+mp[i]-1, ans);
            }
        }
        cout<<ans<<endl;
    }
}
