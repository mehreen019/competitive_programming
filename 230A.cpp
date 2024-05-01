#include<bits/stdc++.h>
using namespace std;
int main(void){
    int s,n,x,y; bool b=1;
    vector<pair<int ,int> > v;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(int i=0;i<n;i++){
        x=v[i].first;
        y=v[i].second;
         if(s>x) s+=y;
        else { cout<<"NO"<<endl; b=0; break;}
    }
    if(b) cout<<"YES"<<endl;
}
