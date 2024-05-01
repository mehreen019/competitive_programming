#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool divv(ll a, ll m){
    if(a==m) return true;
    if(a<m || a%3) return false;
    //cout<<a<<" ";
    return (divv(a/3, m) || divv(a-(a/3), m));
}

int main(void){
    ll tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        if(n==m) cout<<"YES"<<endl;
        else if(n<m) cout<<"NO"<<endl;
        else if(n%3==0){
            bool l=divv(n,m);
            if(l) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
