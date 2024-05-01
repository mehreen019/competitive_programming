#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        long long ans=n;
        while(n>0){
            n/=2;
            ans+=n;
        }
        cout<<ans<<endl;
    }
}
