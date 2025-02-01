#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], ans=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<int> s,t;
        s.pb(inf); t.pb(inf);
        for(int i=0;i<n;i++){
            if((r[i]<=s.back() && r[i]<=t.back()) || (r[i]>s.back() && r[i]>t.back())){
                if(s.back()<t.back()) s.pb(r[i]);
                else t.pb(r[i]);
            }
            else{
                if(s.back()<t.back()) t.pb(r[i]);
                else s.pb(r[i]);
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]<s[i+1]) ans++;
        }
        for(int i=0;i<t.size()-1;i++){
            if(t[i]<t[i+1]) ans++;
        }

        cout<<ans<<endl;

    }
}
