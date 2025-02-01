#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pair<int, int> pii
using namespace std;

const int inf=1e18;

signed main(void){
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
        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
            r[i]=max(r[i]-cnt, 0LL);
            ans+=r[i];
            cnt++;
        }
        cout<<ans<<endl;
    }
}
