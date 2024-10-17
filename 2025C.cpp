#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

const int maxx=2e5+7;
const int inf=1e18;

int32_t main(void){
#ifndef ONLINE_JUDGE
	freopen("D:\\coding\\cp\\input.txt", "r", stdin);
	freopen("D:\\coding\\cp\\output.txt", "w", stdout);
#endif

	fastio;

	int tst=1;
	cin>>tst;
	while(tst--){
		int n,k;
		cin>>n>>k;
		int r[n], ans=0, win=0, ini=0, prev=0,fin=INT_MIN;
		set<int> st;
		map<int, int> mp;
		vector<int> cop;
		for(int i=0;i<n;i++){
			cin>>r[i];
			st.insert(r[i]);
			mp[r[i]]++;
		}
		for(auto it: st){
			cop.pb(it);
		}

		for(int i=0;i<cop.size();i++){
			if(win>=k){
				fin=max(fin, ans);
				
				ans-=mp[cop[ini]];
				ini++;

				if(cop[i]-prev==1){
						ans+=mp[cop[i]];
				}
				else{
						win=0;
						fin=max(fin, ans);
						ans=0;
						ans+=mp[cop[i]];
						ini=i;
						win++;
				}

			}
			else{
				if(i>0){
					if(cop[i]-prev==1){
						ans+=mp[cop[i]];
					}
					else{
						win=0;
						fin=max(fin, ans);
						ans=0;
						ans+=mp[cop[i]];
						ini=i;
					}
				}
				else {
					ans+=mp[cop[i]];
					fin=max(fin, ans);
				}

				win++;
			}

			prev=cop[i];
			//cout<<ini<<" "<<i<<" "<<fin<<endl;
		}

		fin=max(fin, ans);
		cout<<fin<<endl;
	}
}