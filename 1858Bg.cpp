#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,lim,n,d;
    cin>>tst;
    while(tst--){
        cin>>lim>>n>>d;
        ll r[n],las_cou=1, cou=0,co_cou=1;
        vector<ll> vend;
        vend.push_back(1);
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(r[i]<=las_cou+d){
                while(r[i]<=las_cou+d && i<n){
                    if(r[i]!=1){
                        co_cou++;
                        vend.push_back(r[i]);
                    }
                    i++;
                }
                i--;
            }
            else{ co_cou+=2; vend.push_back(las_cou); vend.push_back(r[i]);}
            las_cou=r[i];
        }
        cout<<co_cou-1<<endl;
        for(int i=0;i<n;i++){
            cout<<vend[i]<<" ";
        }
        cout<<endl;
    }
}
