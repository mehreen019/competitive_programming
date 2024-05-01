#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
    string s;
    cin>>s;
    int n=s.size();
    if(s[n-1]==s[n-2]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
