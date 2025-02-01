#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        if(n==1) cout<<0<<endl;
        else{
            if(n<=k) cout<<1<<endl;
            else{
                if(((n-k)%(k-1))==0){
                cout<<  ((n-k)/(k-1))+1<<endl;
                }
                else{
                    cout<<  ((n-k)/(k-1))+2<<endl;
                }
            }
        }
    }
}
