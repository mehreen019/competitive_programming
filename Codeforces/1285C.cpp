#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll n;
    cin>>n;
    ll num=n,high=sqrt(n);
    for(ll i=2;i<=high;i++){
        if(n%i==0){
            ll t=n/i;
            if(__gcd(t,i)==1) num=min(num,t);
        }
    }
    cout<<n/num<<" "<<num<<endl;
}
