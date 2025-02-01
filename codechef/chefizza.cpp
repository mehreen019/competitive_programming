#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, t;
        cin>>n;
        n=n/2;
        t= log2(n);
        //cout<<t<<" "<<(1<<t)<<endl;
        if((1<<(t))==n){ cout<<0<<endl; }
        else{
            int ex=1<<(t);
            cout<<(n-ex)*4<<endl;
        }
    }
}
