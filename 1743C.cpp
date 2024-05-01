#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        int r[n], sum=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int i=1;i<n;i++){
            if(r[i-1]>=r[i] && s[i]=='1') swap(s[i],s[i-1]);
        }
        cout<<s<<endl;
    }
}
//last testcase ta jhamela krtise
