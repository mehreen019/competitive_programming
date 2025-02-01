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
		int r[n], sum=0;
		for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
		}
		if(sum%n) cout<<"NO"<<endl;
		else{
            int t=sum/n,cnt=0;
            bool ok=1;

            for(int i=0;i<n-2;i++){
                if(r[i]>t){
                    r[i+2]+=(r[i]-t);
                    r[i]=t;
                }
                else if(r[i]<=t){
                    r[i+2]-=(t-r[i]);
                    r[i]=t;
                }

                if(r[n-i-1]>t){
                    r[n-i-3]+=(r[n-i-1]-t);
                    r[n-i-1]=t;
                }
                else if(r[n-i-1]<=t){
                    r[n-i-3]-=(t-r[n-i-1]);
                    r[n-i-1]=t;
                }
            }
            for(int i=0;i<n;i++){
                //cout<<r[i]<<" ";
                if(r[i]!=t){ok=0;}
            }
            //cout<<endl;
            if(ok) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
		}
	}
}
