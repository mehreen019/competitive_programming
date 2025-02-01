#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,x,y,a;

    cin>>tst;
    while(tst--){long long sum=0;
    vector <pair  <long long, long long>> v;
        cin>>n;
        for(long long i=0;i<n;i++){
            cin>>x>>y;
            if(x>y){ v.push_back(make_pair(x,y)); }
            else {  v.push_back(make_pair(y,x));  }
        }
    sort(v.begin(), v.end());
    if(v[n-1].second==v[n-2].first){
            x=v[n-1].second; v[n-1].second=v[n-1].first; v[n-1].first=x;
            }
    else {x=v[n-1].first; }
    sum+=2*x;
    for(long long i=0;i<n;i++){
        sum+=2*v[i].second;
       // cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<sum<<endl;
    }

}
