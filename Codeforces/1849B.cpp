#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int x;
        ll r[n];
        vector<ll> v;
        map<ll, list<ll>> m;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%k){ m[x%k].push_back(i); r[i]=x%k;}
            else {m[k].push_back(i); r[i]=k; }
        }
        sort(r,r+n);
        v.push_back(r[0]);
        x=r[0];
        for(int i=1;i<n;i++){
            if(r[i]!=x){
                v.push_back(r[i]);
                x=r[i];
            }
        }
        for(int i=v.size()-1; i>=0;i--){
            for(auto it=m[v[i]].begin();it!=m[v[i]].end();it++){
                cout<<((*it)+1)<<" ";
                }
        }
        cout<<endl;
    }
}
