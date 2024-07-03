#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    //cin>>tst;
    //while(tst--){
        int a,b;
        cin>>a>>b;
        if(b%a==0){
            cout<<b/a<<endl;
        }
        else{
                int ans=1;
                for(int i=2;i*i<=b;i++){
                    if(b%i==0){
                        if(i>=a){
                            ans=max(ans, b/i);
                        }
                        if((b/i)>=a){
                            ans=max(ans, i);
                        }
                    }
                }
                cout<<ans<<endl;
        }
    //}
}
