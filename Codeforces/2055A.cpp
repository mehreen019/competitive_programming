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
        int n,a,b;
        cin>>n>>a>>b;
        if(abs(a-b)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
