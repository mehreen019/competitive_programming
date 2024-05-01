#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        if(n%2) cout<<"YES"<<endl;
        else if(n==2) cout<<"NO"<<endl;
        else{
            while(n>0){
                n=n/2;
                if(n%2 && n!=1){ cout<<"YES"<<endl; n=-1; break; }
                else if(n==2) {cout<<"NO"<<endl; break;}
            }
            //if(n>=0) cout<<"NO"<<endl;
        }
    }
}
