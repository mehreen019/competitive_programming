//1 2 2 3 5 5
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n;
        cin>>n;
        map<int,int>m;
        set<int> s;
        ll r[n], cou=0,i=0,sum=0,idx=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>r[i];
            m[r[i]]++;
            s.insert(r[i]);
        }
        for(auto it:m){
            cou-=(idx* it.second);
            idx+=it.second;
            ans=max(ans,cou+(it.second/2));

            cou+= it.second*(n-idx);
            ans=max(ans,cou);
        }
        //cou+= fs*(n-fs);
        cout<<ans<<endl;
    }
}
//1 2 2 3 3 4 4 4 6 7 7 9
//1 1 2 2 2
