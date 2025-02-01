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
		string s;
		cin>>s;
		int n=s.size(), sum=0, pre2=0, pre3=0;
		map<int, int>mp;
		for(int i=0;i<n;i++){
            sum+=s[i]-'0';

            if((s[i]-'0')==2){ pre2+=2; mp[pre2]++; }
            else if((s[i]-'0')==3){ pre3+=6; mp[pre3]++;}
		}
		if(sum%9==0) cout<<"YES"<<endl;
		else{
            int maxsum=sum;
            for(int i=0;i<n;i++){
                if((s[i]-'0')==2){ maxsum+=2; }
                else if((s[i]-'0')==3){ maxsum+=6;}
            }

            bool ok=1;
            int goal=maxsum - sum;
            //cout<<sum<<" "<<maxsum<<" "<<goal<<endl;
            int st=(sum/9)+1, ed=(maxsum/9);
            bool ans=0;
            for(int i=st; i<=ed;i++){
                int temp=9*i-sum;
                //cout<<i<<" "<<ed<<" "<<9*i<<" "<<temp<<endl;
                if(pre2==0){
                    if(temp%6==0 && temp<=pre3) {ans=1; break;}
                }
                else if(pre2==2){
                    if(temp%2==0 && (temp-4)%6 && temp<=(pre3+pre2)) {ans=1; break;}
                }
                else if(temp%2==0&& temp<=(pre3+pre2)) {ans=1; break;}
            }

            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
		}
	}
}
