#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        long long h[n],p[n],a=-1; vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){ cin>>h[i]; a=max(a,h[i]);}
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++){
            v.push_back(make_pair(p[i],h[i]));
        }
        sort(v.begin(),v.end());
        long long ts=k,s=k,i=0;
        while(i<n && s>0){
            if(v[i].second>ts){ s-=v[i].first; if(s>0)ts+=s;}
            else i++;
            if(ts>=a) break;
        }
        if(ts>=a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //for(auto& it : v){cout<<it.first<<" "<<it.second<<endl;}
    }
}
