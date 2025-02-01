#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        int ans=1,cou=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){ cou++; ans=max(ans,cou+1); }
            else cou=0;
        }
        cout<<ans+1<<endl;
    }
}
