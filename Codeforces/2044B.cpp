#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fs first
#define sc second
using namespace std;

const int inf=1e18;

signed main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='p') cout<<'q';
            else if(s[i]=='q') cout<<'p';
            else cout<<'w';
        }
        cout<<endl;
    }
}
