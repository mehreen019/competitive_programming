#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int n,x;
    cin>>n;
    vector<ll> r;
    set<int> s;
    for(int i=0;i<n;i++){ cin>>x; s.insert(x);}
    for(auto& ptr: s){
        r.push_back(ptr);
    }
    string p="NO";
    for(int i=0;i<r.size()-1;i++){
        if(r[i]*2>r[i+1]) p="YES";
    }
    //if(m*2<=r[n-1]) cout<<"NO"<<endl;
    //else cout<<"YES"<<endl;
    cout<<p<<endl;
}
