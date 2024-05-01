#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n; string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        sort(s.begin(),s.end());
        cout<<s[n-1]-96<<endl;
    }
}
