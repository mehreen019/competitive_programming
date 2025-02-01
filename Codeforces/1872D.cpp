#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n,a,b;
    cin>>tst;
    while(tst--){
        cin>>n>>a>>b;
        ll mx=n, mn=1, t=min(a,b),ans=0;
        for(int i=a;i<=n;i+=a){
            if(i%a==0 && i%b ){
                ans+=mx;
                mx--;
            }
        }
        for(int i=b;i<=n;i+=b){
            if(i%b==0 && i%a){
                ans-=mn;
                mn++;
            }
        }
        cout<<ans<<endl;
    }
}
