#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int cnt=1, ans=0;
        string s;
        while(cnt<=12){
            cin>>s;
            if(s.size()==cnt) ans++;
            cnt++;
        }
        cout<<ans<<endl;
    }
}
