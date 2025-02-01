#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        string s;
        cin>>n>>s;
        int prefix[n], hand=0;
        prefix[0]=s[0]-'0';
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+(s[i]-'0');
        }
        char ans[n]; bool f=1;
        for(int i=n-1;i>=0;i--){
            ans[i]=((prefix[i]+hand)%10)+'0';
            hand=(prefix[i]+hand)/10;
        }
        if(hand>0){ cout<<hand; f=0;}
        for(int i=0;i<n;i++){
            if(f && ans[i]=='0') continue;
            else if(ans[i]!='0'){
                f=0;
            }
            if(!f) cout<<ans[i];
        }
        cout<<endl;
    }
}
