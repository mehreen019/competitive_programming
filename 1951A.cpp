#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n,cou=0; string s;
        bool f=0;
        cin>>n>>s;
        if(s[0]=='1') cou++;
        for(int i=1;i<n;i++){
            if(s[i]=='1'){ cou++;
                if(s[i-1]=='1') f=1;
            }

        }
        if(cou%2==1) cout<<"NO"<<endl;
        else if(f && cou==2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
//3 2 4 4 5
