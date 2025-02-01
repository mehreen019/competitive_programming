#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, r, ans=0;
        string s;
        cin>>n>>r>>s;
        map<char, int>mp;
        mp['A']=0;
        mp['B']=0;
        mp['C']=0;
        mp['D']=0;
        mp['E']=0;
        mp['F']=0;
        mp['G']=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second < r) ans+=(r-it.second);
        }
        cout<<ans<<endl;
    }
}
