#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        if(n%2==1 && k%2==1 && k<=sqrt(n)) cout<<"YES"<<endl;
        else if(n%2==0 && k%2==0 && k<=sqrt(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
