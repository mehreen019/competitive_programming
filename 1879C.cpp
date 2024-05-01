#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod =  998244353;
int main(void){
    ll tst;
    string s;
    cin>>tst;
    ll fact[200001];
    fact[0]=1;
    for(int i=1;i<=200000;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    while(tst--){
        cin>>s;
        ll cou=0,per=1, t=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                t++;
            }
            else{
                cou+=t-1;
                per*=t;
                per%=mod;
                t=1;
            }
        }
        cou+=t-1;
        per*=t;
        per%=mod;
        per*=fact[cou];
        per%=mod;
        cout<<cou<<" "<<per<<endl;
    }
}
