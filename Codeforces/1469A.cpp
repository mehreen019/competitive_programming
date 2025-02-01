#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>s;
        n=s.size();
        if(n%2) cout<<"NO"<<endl;
        else if(s[0]==')' || s[n-1]=='(') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
