#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,ck,rem=INT_MAX;
        cin>>n>>ck;
        if(ck>=n){
            rem=ck%n;
            cout<<min(rem, n-rem)<<endl;
        }
        else cout<<n-ck<<endl;

    }
}
