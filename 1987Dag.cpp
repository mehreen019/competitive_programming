#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int>dp(5005,0);

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], minn=INT_MAX;
        set<int> ss;
        map<int, int> mp;
        vector<pair<int,int>> pv;
        for(int i=0;i<n;i++){
            cin>>r[i];
            ss.insert(r[i]);
            mp[r[i]]++;
            minn=min(minn, r[i]);
        }
        //sort(r,r+n);
        int ans=0, bob=n/2, cnt=0, alice=0;
        if(n%2==0) alice=n/2;
        else alice=(n/2)+1;

        for(auto it:mp){
            pv.push_back({it.second, it.first});
        }
        sort(pv.begin(), pv.end());
        for(auto it: pv){
            if(it.second==minn) continue;
            if(bob>=it.first){
                int temp=it.first;
                it.first=0;
                bob-=temp;
                mp[it.second]=0;
            }
            else{ it.first-=bob; mp[it.second]=it.first; break; }
        }
        for(auto it:mp){
            //cout<<it.first<<" "<<it.second<<endl;
            if(alice<=0) break;
            if(it.second>0){ ans++; alice--; }
            else continue;
        }
        cout<<ans<<endl;
    }
}
