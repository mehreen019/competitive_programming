#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k, cnt=0, one=0, zero=0;
        cin>>n>>k;
        string s, t;
        cin>>s>>t;
        string temps=s, tempt=t;
        sort(temps.begin(), temps.end());
        sort(tempt.begin(), tempt.end());
        if(temps!=tempt) cout<<"NO"<<endl;
        else{
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    cnt++;
                }
                if(s[i]=='0') zero++;
                if(s[i]=='1') one++;
            }
            if((cnt/2) == k) cout<<"YES"<<endl;
            else if((cnt/2)>k) cout<<"NO"<<endl;
            else{
                k-=(cnt/2);
                if(one>1 || zero>1) cout<<"YES"<<endl;
                else if(one==1 && zero==1){
                    if(k%2==0) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
    }
}
