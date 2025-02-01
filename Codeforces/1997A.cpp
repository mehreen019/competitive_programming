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
        if(s.size()==1){
            if(s[0]=='a') cout<<'b'<<s<<endl;
            else cout<<'a'<<s<<endl;
        }
        else{
            bool f=1;
            for(int i=0;i<s.size();i++){
                if(s[i]==s[i+1] && f){
                    if(s[i]=='a') cout<<s[i]<<'b';
                    else cout<<s[i]<<'a';
                    f=0;
                }
                else cout<<s[i];
            }
            if(f){
                if(s[s.size()-1]=='a') cout<<'b';
                else cout<<'a';
            }
            cout<<endl;
        }

    }
}
