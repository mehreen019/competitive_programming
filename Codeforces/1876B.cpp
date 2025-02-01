#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=998244353;

int32_t main(void){
    int n;
    cin>>n;
    int r[n], maxnum=0, ans=0, occ=1;
    //vector<int>div(n+2);
    map<int, vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>r[i];
        maxnum= max(maxnum, r[i]);
    }
    //div[1].push_back(maxnum);
    mp[maxnum].push_back(1);
    for(int i=2;i<=n;i++){
        maxnum=0;
        for(int j=i;j<=n;j+=i){
            maxnum=max(maxnum, r[j-1]);
        }
        //div[i].push_back(maxnum);
        mp[maxnum].push_back(i);
        //cout<<maxnum<<endl;
    }
    //cout<<"ok";
    for(auto it: mp){
        //cout<<it->first<<endl;
        for(auto idx: it.second){
            int temp = ((it.first)*occ)%MOD;
            ans = (ans+temp)%MOD;
            occ=(occ*2)%MOD;
        }
    }
    cout<<ans<<endl;

}
