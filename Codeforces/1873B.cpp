#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll r[n],minn=INT_MAX,minid,ans=1;
        for(int i=0;i<n;i++){
            cin>>r[i];
            minn=min(minn, r[i]);
            if(r[i]==minn) minid=i;
        }
        r[minid]++;
        for(int i=0;i<n;i++){
            ans*=r[i];
        }
        cout<<ans<<endl;
    }
}
