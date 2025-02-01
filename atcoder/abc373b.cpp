#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        string s;
        string o="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int r[30]={0}, ans=0,st;
        cin>>s;
        for(int i=0;i<s.size();i++){
            r[s[i]-'A']=i;
        }
        st=r[0];
        for(int i=0;i<s.size();i++){
            ans+=abs(st-r[o[i]-'A']);
            st=r[o[i]-'A'];
        }
        cout<<ans<<endl;
    }
}
