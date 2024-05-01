#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX= 200005;
vector<int>a,b;

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll ans=0, t;
        for(int i=n-1;i>=m;i--){
            ans+=min(a[i], b[i]);
        }
        ll r[m+1];
        r[m]=ans;
        //cout<<ans<<endl;
        for(int i=m-1;i>0;i--){
            r[i]=min(r[i+1]+a[i], r[i+1]+b[i]);
            //cout<<r[i]<<" ";
        }
        r[0]=r[1]+a[0];
        t=r[0];
        for(int i=0;i<m;i++){
            t=min(t, r[i+1]+a[i]);
            //cout<<t<<endl;
        }
        cout<<t<<endl;
    }
}
