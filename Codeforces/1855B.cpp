#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int cou=0,ans=0;
       for(ll i=1;i<=10000;i++){
            while(n%i==0){
                cou++;
                i++;
            }
            ans=max(cou,ans);
            cou=0;
            //cout<<i<<" ";
        }
        cout<<ans<<endl;
    }
}
