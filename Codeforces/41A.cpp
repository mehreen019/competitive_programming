#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s,r;
    cin>>s;
    cin>>r;
    reverse(s.begin(), s.end());
    if(r==s)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
