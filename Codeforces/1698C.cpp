#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll x,tri=0,idx=0;
        set<int> s;
        vector<int>v;
        queue<int>q;
        bool l=1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i<3){
                tri+=x;
                q.push(x);
            }
            else{
                s.insert(tri);
                tri-=q.back();
                q.pop();
                q.push(x);
                tri+=x;
            }
            v.push_back(x);
        }
        s.insert(tri);
        for(auto &it: s){
            if(find(v.begin(), v.end(), it)!=v.end()){continue;}
            else{ l=0;break; }
        }
        if(l) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
