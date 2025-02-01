#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fib(ll n,ll g, ll k){
    if(k==1 && n>=0){  return 1;}
    else if(g-n>n){ return 0;}
    else if(n<0) return 0;

    return fib(g-n, n, k-1);
    //cout<<n<<" ";
}

int main(void){
    ll tst, n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        ll ans=0;
        for(ll i=n;i>=n/2;i--){
            if(fib(i, n, k-1)) ans++;
        }
        cout<<ans<<endl;
    }
}
