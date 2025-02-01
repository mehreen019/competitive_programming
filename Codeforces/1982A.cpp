#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        if(a1>b1 && a2>b2){
            cout<<"YES"<<endl;
        }
        else if(b1>a1 && b2>a2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
}
