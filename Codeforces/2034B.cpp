#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

const int maxx=1e5+9;
const int inf=2e18;
const int mod=1e9+7;

int32_t main(void){

    fastio;

    int tst=1, ortst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int cnt=0, ans=0, ca=0;
        for(int i=0;i<n;i++){
            if(ca>0) ca--;
            else if(s[i]=='1') cnt=0;
            else if(s[i]=='0') cnt++;

            if(cnt>=m){
                ca=k;
                cnt=0;
                ans++;
                ca--;
            }
        }
        cout<<ans<<endl;
    }
}
