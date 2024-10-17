#include<bits/stdc++.h>
//#define int long long
#define pb push_back
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

const int maxx=2e5+7;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int32_t main(void){
#ifndef ONLINE_JUDGE
	freopen("D:\\coding\\cp\\input.txt", "r", stdin);
	freopen("D:\\coding\\cp\\output.txt", "w", stdout);
#endif

	int tst;
	cin>>tst;
	while(tst--){
		int n,a,b;
		long long ans=0;
		cin>>n;
		vector<pair<int, int> >vp;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			vp.pb({a,b});
		}
		sort(vp.begin(), vp.end());\
		ordered_set<int> st;
		for(int i=0;i<n;i++){
			ans+= st.size() - st.order_of_key(vp[i].second);
			st.insert(vp[i].second);
		}
		cout<<ans<<endl;

	}
}