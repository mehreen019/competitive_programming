#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        string s;
        cin>>n>>s;
        int u=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U') u++;
        }
        if(u%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
//even u, odd d= alice lose
//d
