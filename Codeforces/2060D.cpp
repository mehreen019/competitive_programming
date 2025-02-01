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
        int n;
        cin>>n;
        int r[n],t;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        bool ok=1;
        for(int i=1;i<n;i++){
            t=min(r[i], r[i-1]);
            r[i]-=t; r[i-1]-=t;
            if(r[i]<r[i-1]){ ok=0; break; }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
