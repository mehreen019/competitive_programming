#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        vector<pii> vp;
        for(auto it:mp){
            vp.pb({it.second,it.first});
        }
        int sz=vp.size(),tk=k;
        sort(vp.begin(),vp.end());
        for(int i=0;i<vp.size();i++){
            //cout<<vp[i].first<<endl;
            if(vp[i].first<=k && k>0){ k-=vp[i].first; sz--; }
        }
        cout<<max(sz,1LL)<<endl;
    }
}
