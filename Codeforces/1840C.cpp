#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,k,t,tst;
    cin>>tst;
    while(tst--){
        long long d=0,cou=0,ans=0;
        cin>>n>>k>>t;
        long long r[n];
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            while(r[i]<=t && i<n){
                d++;
                if(d>=k){
                cou++;
                ans+=cou;
                }
                i++;
            }
            d=0; cou=0;
        }
        cout<<ans<<endl;
    }
}
