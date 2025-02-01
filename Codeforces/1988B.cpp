#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='0' || s[s.size()-1]=='0'){
            int zero=0, one=0;
            bool t=1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){ one++; t=1; }
                else if(t){ zero++; t=0; }
            }
            if(one>zero) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
}
