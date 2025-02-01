#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a=0,b=0,c=0,d=0,ta=0,tb=0,tc=0,td=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<(4*n);i++){
            if(s[i]=='A'){ ta++; a=min(n, ta); }
            else if(s[i]=='B'){ tb++; b=min(n, tb); }
            else if(s[i]=='C'){ tc++; c=min(n, tc); }
            else if(s[i]=='D'){ td++; d=min(n, td); }

            //cout<<a<<" "<<b<<" "<<tc<<" "<<td<<endl;
        }
        cout<<(a+b+c+d)<<endl;
    }
}
