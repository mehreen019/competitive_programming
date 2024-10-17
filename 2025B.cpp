#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

const int maxx=2e5+7;
const int inf=1e18;
const int mod=1e9+7;

long long binex(int a, int b){
    long long res=1;
    while(b>0) {
        if(b%2==1) {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return (res%mod);
}

int32_t main(void){
#ifndef ONLINE_JUDGE
	freopen("D:\\coding\\cp\\input.txt", "r", stdin);
	freopen("D:\\coding\\cp\\output.txt", "w", stdout);
#endif

	fastio;

	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}

	for(int i=0;i<n;i++){
		cout<<binex(2, b[i]) <<endl;
	}
}