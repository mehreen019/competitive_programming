#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int maxx=2e3+10;
const int mod=1e9+7;
const int inf=1e18;
vector<bool>primes(maxx, 1);


int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int a[n],b[n];
        vector<int> big, small;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>a[i]) small.pb(b[i]-a[i]);
            else big.pb(a[i]-b[i]);
        }

        if(small.size()>1) cout<<"NO"<<endl;
        else{
            sort(big.begin(), big.end());

            if(big.size()==n) cout<<"YES"<<endl;
            else if(small[0]>big[0]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
