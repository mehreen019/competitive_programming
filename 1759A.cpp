#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int i=0,cou=0;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='e' && s[i+1]=='s'){cou++;}
            else if(s[i]=='s' && s[i+1]=='Y'){cou++;}
            else if(s[i]=='Y' && s[i+1]=='e'){cou++;}
        }
        if(i==1){
            if(s[0]=='Y' || s[0]=='e' || s[0]=='s')cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(cou==i-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;;
    }
}
