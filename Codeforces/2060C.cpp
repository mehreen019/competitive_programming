#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n],ans=0;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        sort(r,r+n);
        for(int i=0;i<n;i++){
            if(mp[r[i]]>=1 && k-r[i]>0 && mp[k-r[i]]>=1){
                if(r[i]==k-r[i] && mp[r[i]]<=1) continue;

                ans++; mp[k-r[i]]--; mp[r[i]]--;
            }
        }
        cout<<ans<<endl;
    }
}
