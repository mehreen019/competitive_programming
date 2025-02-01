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

	int tst=1;
	cin>>tst;
	while(tst--){
		int n, ans=0, pmax=INT_MIN;
		cin>>n;
		vector<pii>vp(n);
		for(int i=0;i<n;i++){
            cin>>vp[i].first;
		}
        for(int i=0;i<n;i++){
            cin>>vp[i].second;
		}
		for(int i=0;i<n;i++){
            ans+=(vp[i].first>=vp[i].second ? vp[i].first : vp[i].second);
            pmax=max(pmax, (vp[i].first<=vp[i].second ? vp[i].first : vp[i].second));
            //cout<<ans<<" "<<vp[i].first<<" "<<vp[i].second<<endl;
		}
		cout<<ans+pmax<<endl;
	}
}
