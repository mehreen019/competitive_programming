#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int tst,n;
    cin>>tst;
    while(tst--){
        long long int a,b,lcm,tlcm;
        cin>>n;
        lcm=1*n; a=1; b=n-1;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{
        for(int i=2;i<=n/2;i++){
            if((n-i)%i==0) tlcm=n-i;
            else tlcm=i*(n-i);
            //cout<<tlcm<<" ";
            if(tlcm<lcm){
                lcm=tlcm; a=i; b=n-i;
            }
        }
        cout<<a<<" "<<b<<endl;
        }
    }
}
