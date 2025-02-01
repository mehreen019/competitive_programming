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
		int n;
		cin>>n;
		string s;
		cin>>s;
		map<char, int> mp;
		vector<pair<int, char>> vp;
		for(int i=0;i<n;i++){
             mp[s[i]]++;
		}
		for(auto it:mp){
            vp.pb({it.second, it.first});
		}
		sort(vp.begin(), vp.end());
        if(vp.size()>1){
            char change=vp[0].second, toc=vp[vp.size()-1].second;
            bool ok=0;
            for(int i=0;i<n;i++){
                if(!ok && s[i]==change){
                    cout<<toc;
                    ok=1;
                }
                else cout<<s[i];
            }
            cout<<endl;
        }
        else cout<<s<<endl;
	}
}
