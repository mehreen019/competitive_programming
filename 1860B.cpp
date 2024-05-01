#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k,a1,ak;
    cin>>tst;
    while(tst--){
        cin>>n>>k>>a1>>ak;
        int rem=n-((ak*k)+a1),ans;
        if(rem<0) cout<<"0"<<endl;
        else{
               // cout<<rem<<endl;
        while(rem%k!=0 && a1!=0){
            rem++;
            a1--;
        }

        ans=(rem/k)+(rem%k);
        //if(ans<0) ans=0;
        cout<<ans<<endl;
        }
    }
}
