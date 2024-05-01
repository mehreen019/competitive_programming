#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<ll,ll>> v;
    priority_queue<ll, vector<ll>, greater<ll>>pq;
    ll n,k,x,y,mul;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({y,x});
    }
    sort(v.begin(), v.end());
    ll sum=0,ans=LLONG_MIN;
    for(int i=n-1;i>=0;i--){
        sum+=v[i].second;
        if(pq.size()<k){
            pq.push(v[i].second);
        }
        else {if(!pq.empty() && pq.top()<v[i].second){
            sum-=pq.top();
            pq.pop();
            pq.push(v[i].second);
        }
        else sum-=v[i].second;
        }
        ans=max(ans, v[i].first*sum);
    }
    cout<<ans<<endl;
}
