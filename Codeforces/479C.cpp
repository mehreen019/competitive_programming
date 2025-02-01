#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,x,y;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
    ll f=INT_MIN;
    for(int i=0;i<n;i++){
        if(f<=v[i].second) f=v[i].second;
        else f=v[i].first;
    }
    cout<<f<<endl;
}
