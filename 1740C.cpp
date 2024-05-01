#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll r[n],m,r1=n,r2=0,ans1,ans=-1;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);

        for(int i=1;i<n-1;i++){
            ans1=max(2*r[i+1]-r[i]-r[0], r[n-1]+r[i]-(2*r[i-1]));
            ans=max(ans,ans1);
        }
        cout<<ans<<endl;
    }
}
