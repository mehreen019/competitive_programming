#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],ans=0;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        for(auto it: mp){
            ans=max(ans, it.second);
        }
        cout<<n-ans<<endl;
    }
}
