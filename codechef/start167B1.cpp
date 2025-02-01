#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9+7;
const int maxx=1e5+10;
const int inf=1e18;


int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') one++;
            else zero++;
        }
        if(one==0) cout<<zero<<endl;
        else if(zero==0) cout<<one<<endl;
        else cout<<1<<endl;
    }
}
