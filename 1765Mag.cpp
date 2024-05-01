#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int tst,n;
    cin>>tst;
    while(tst--){
        long long int a=1,b,r;
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){ b=n/i; a=max(a,b); }
        }
        cout<<a<<" "<<n-a<<endl;
    }
}
}
