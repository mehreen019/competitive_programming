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
		int n,x, cou=0, pri=1, ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
            cin>>x;
            cou+=x;
            while(cou>=(pri*pri)){
                if(cou==(pri*pri)){
                    ans++;
                }
                pri+=2;
            }
            //cout<<cou<<" "<<i<<" "<<pri<<endl;
		}
		cout<<ans<<endl;
	}
}
