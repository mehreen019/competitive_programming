#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,s,m, tm=0;
        cin>>n>>s>>m;
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++){

            cin>>v[i].first>>v[i].second;
        }
        bool ans=0;
        for(int i=0;i<n;i++){
            if(v[i].first-tm>=s){ ans=1; break; }
            tm=v[i].second;
        }
        if(m-tm>=s) ans=1;
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
