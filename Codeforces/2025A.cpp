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
		string a,b;
		cin>>a>>b;
		if(a.size()<b.size()){
			swap(a,b);
		}
		int match=0;
		for(int i=0;i<b.size();i++){
			if(a[i]==b[i]){
				match++;
			}
			else break;
		}

		if(match<=1) cout<<a.size()+b.size()<<endl;
		else cout<<a.size()+(b.size()-match+1)<<endl;
	}
}