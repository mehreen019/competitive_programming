#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s;
        cin>>s;
        if( s.size()>2 && s[0]=='1' && s[1]=='0'){
            if(s[2]=='0' || (s[2]=='1' && s.size()==3)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
