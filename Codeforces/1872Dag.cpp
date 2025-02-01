#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int x,int y){ return x*y/__gcd(x,y); }

int main(void){
    ll tst,n,b,c;
    cin>>tst;
    while(tst--){
        cin>>n>>b>>c;
        ll l=(n/b)-(n/lcm(b,c));
        ll r=(n/c)-(n/lcm(b,c));
        cout<<((2*n-l+1)*(l)/2)-(r*(r+1))/2<<endl;
    }
}
