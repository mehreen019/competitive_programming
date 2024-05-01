#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int j=2;
        while(j<=n){
            cout<<j<<" ";
            j+=2;
        }
        cout<<1<<" ";
        if(n%2) j=n;
        else j=n-1;
        while(j>2){
            cout<<j<<" ";
            j=j-2;
        }
        cout<<endl;
    }
}
