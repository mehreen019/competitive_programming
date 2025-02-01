#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, t;
        cin>>n;
        int r[n+1], orr=0, cnt=0;
        map<int, vector<int> >mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]==0) continue;
            t=log2(r[i]);
            mp[t].push_back(r[i]);
        }

        for(auto it:mp){
            for(auto i:it.second){
                orr=(orr|i);
            }
            t=(1<<(it.first+1));

            if(orr==(t-1)){ cnt=0; }
            else{ cnt+=it.second.size(); }
            cout<<cnt<<" "<<orr<<" "<<it.first<<endl;
        }
        cout<<cnt<<endl;
    }
}
