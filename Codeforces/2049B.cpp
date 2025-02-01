#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
#define fastio ios_base::sync_with_stdio; cin.tie(0);
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cntp=0, cnts=0;
        for(int i=0;i<n;i++){
            if(s[i]=='p') cntp++;
            else if(s[i]=='s') cnts++;
        }
        if(cnts==0 || cntp==0) cout<<"YES"<<endl;
        else{
            if(cnts==1 && s[0]=='s') cout<<"YES"<<endl;
            else if(cntp==1 && s[n-1]=='p') cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
