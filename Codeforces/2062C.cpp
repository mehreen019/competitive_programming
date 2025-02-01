#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],ans=LLONG_MIN, sum=0,lsum,rsum;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
            v.pb(r[i]);
        }
        ans=max(ans, sum);
        while(v.size()>1){
            lsum=0;
            vector<int> fr;
            for(int i=0;i<v.size()-1;i++){
                lsum+=(v[i+1]-v[i]);
                fr.pb(v[i+1]-v[i]);
            }
            ans=max(ans, max(lsum , -lsum));
            v=fr;
        }
        cout<<ans<<endl;
    }
}
