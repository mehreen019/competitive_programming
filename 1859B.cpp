#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int m,x,pr=0,nx=0,ans=0;
        vector<ll> v,ult;
        for(int i=0;i<n;i++){
            cin>>m;
            nx+=m;
            for(int i=pr;i<nx;i++){
                cin>>x;
                v.push_back(x);
            }
            sort(v.begin()+pr, v.begin()+nx);
            ult.push_back(v[pr]);
            ult.push_back(v[pr+1]);
            pr+=m;
        }
        ll minn=INT_MAX, mint=INT_MAX;
        for(int i=1;i<ult.size();i=i+2){
            ans+=ult[i];
            mint=min(mint, ult[i]);
            if(ult[i-1]<minn){
                minn=ult[i-1];
            }
        }
        ans+=minn;
        ans-=mint;
        cout<<ans<<endl;
    }
}
