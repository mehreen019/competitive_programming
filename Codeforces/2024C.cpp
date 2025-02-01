#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a,b;
        cin>>n;
        vector< pair< int, pair<int, int> > > vp;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            vp.pb({a+b, {a, b}});
        }
        sort(vp.begin(), vp.end());
        for(int i=0;i<n;i++){
            cout<<vp[i].second.first<<" "<<vp[i].second.second<<" ";
        }
        cout<<endl;
    }
}
