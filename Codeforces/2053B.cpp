#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9+7;
const int maxx=1e5+10;
const int inf=1e18;


int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<pii> vp(n);
        int mx=INT_MIN, mn=INT_MAX;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>vp[i].first>>vp[i].second;
            mx=max(mx, vp[i].second);
            mn=min(mn, vp[i].first);
        }
        int pre[mx+5]={0};
        for(int i=0;i<n;i++){
            if(vp[i].first==vp[i].second){
                pre[vp[i].first]=1;
                mp[vp[i].first]++;
            }
        }
        for(int i=mn;i<=mx;i++){
            pre[i]+=pre[i-1];
        }
        for(int i=0;i<n;i++){
            if(vp[i].first==vp[i].second){
                if(mp[vp[i].first]>1) cout<<'0';
                else cout<<'1';
            }
            else{
                if(pre[vp[i].second]-pre[vp[i].first-1]==(vp[i].second-vp[i].first+1)){
                    cout<<'0';
                }
                else cout<<'1';
            }
        }
        cout<<endl;
    }
}
