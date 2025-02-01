#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        if(k==1) cout<<"YES"<<endl;
        else{
            if(n%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
