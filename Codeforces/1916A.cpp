#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        ll r[n],mul=1;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mul*=r[i];
        }
        if(2023%mul==0){
            cout<<"YES"<<endl<<2023/mul<<" ";
            k--;
            while(k--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
