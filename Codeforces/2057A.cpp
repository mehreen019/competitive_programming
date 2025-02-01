#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        cout<<(max(n,m)+1)<<endl;
    }
}
