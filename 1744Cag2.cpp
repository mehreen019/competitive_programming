#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    char x;
    cin>>tst;
    while(tst--){
        cin>>n>>x>>s;
        s+=s;
        int cou=0,ans=0;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='g'){ cou=i;}
                if(s[i]==x){
                    ans=max(ans,cou-i);
                }
            }
        if(x=='g') cout<<0<<endl;
        else cout<<ans<<endl;
    }
}
