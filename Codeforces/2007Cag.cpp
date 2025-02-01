#include<bits/stdc++.h>
#define pb push_back
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a,b,x;
        cin>>n>>a>>b;
        int r[n], gcd=__gcd(a,b), ans=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>x;
            r[i]=(x%gcd);
        }
        sort(r,r+n);
        for(int i=1;i<n;i++){
            ans=min(ans, r[i-1]-r[i]+gcd );
        }
        ans=min(ans, r[n-1]-r[0] );
        cout<<ans<<endl;
    }
}
