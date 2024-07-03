#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m, ans=INT_MAX;
        cin>>n;
        int r[n], maxnum=0;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
            maxnum=max(maxnum, mp[r[i]]);
        }
        //cout<<maxnum<<endl;
        for(auto it=mp.begin(); it!=mp.end();it++){
            if(it->second != maxnum) continue;

            int range=0, cnt=0;
            for(int i=0;i<n;i++){
                if(r[i]==it->first){ cnt+=range*(it->first); range=0; }
                else range++;
            }
            cnt+=range*(it->first);
            ans=min(ans, cnt);
        }


        cout<<min(ans, n-mp[1])<<endl;
    }
}
