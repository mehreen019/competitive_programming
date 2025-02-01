#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll r[n];
        for(int i=0;i<n;i++) cin>>r[i];
        ll even=0,odd=0,p=INT_MIN;
        for(int i=0;i<n;i++){
            if(i%2){
                if(r[i]>=0) odd+=r[i];
            }
            else{
                if(r[i]>0){ even+=r[i];}
            }
        }

}
