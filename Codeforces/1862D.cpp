#include<bits/stdc++.h>
#define ll long long
#define tie ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(void){
    tie;
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;

        ll l=1,r=3e9,ncr;
        if(n==1) cout<<2<<endl;
        else{
        while(l<=r){
            ll mid=(l+r)/2;

            ncr = (mid*(mid-1))/2;
            if(ncr==n){ r=mid; break;}

            //cout<<mid<<" ";
            if(ncr<n) l=mid+1;
            else r=mid-1;
        }
        cout<<r+n-((r*(r-1))/2)<<endl;
        }
    }
}
3,
