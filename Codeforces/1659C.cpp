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
        int n,a,b;
        cin>>n>>a>>b;
        int r[n+1], pre[n+1],ans=LLONG_MAX, t;
        pre[0]=0;
        r[0]=0;
        for(int i=1;i<=n;i++){
            cin>>r[i];
            pre[i]=pre[i-1]+r[i];
        }
        for(int i=0;i<=n;i++){
            t=(r[i]*a + r[i]*b + (pre[n] - pre[i] - r[i]*(n-i))*b);
            ans=min(t, ans );
            //cout<<t<<endl;
        }
        cout<<ans<<endl;
    }
}
