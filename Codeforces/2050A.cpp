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
		int n,m;
		cin>>n>>m;
		string s;
		int ans=0, cou=0;
		bool ok=0;
		for(int i=0;i<n;i++){
            cin>>s;
            if(!ok){
                cou+=s.size();
                if(cou<=m) ans++;
                else ok=1;
            }
		}
		cout<<ans<<endl;
	}
}
