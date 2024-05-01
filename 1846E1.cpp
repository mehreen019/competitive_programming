#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        bool l=0;
        n--;
        ll sum=0,in=1;
        for(ll i=2;i<sqrt(n);i++){
            if(n%i==0){
                while(sum<n){
                    in*=i;
                    sum+=in;
                }
                if(sum==n){ l=1; break; }
                else{ sum=0; in=1; }
            }
        }
        if(l) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
