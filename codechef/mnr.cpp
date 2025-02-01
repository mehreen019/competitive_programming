#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        if(n==3) cout<<0<<endl;
        else{
            int ans=min(r[n-2]-r[1], LLONG_MAX);
            ans=min(r[n-3]-r[0], ans);
            ans=min(r[n-1]-r[2], ans);
            cout<<ans<<endl;
        }
    }
}
