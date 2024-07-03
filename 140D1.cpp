#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,x,y;
        cin>>n>>x>>y;
        if(y>2*x){
            cout<<(n/2)*y + (n%2)*x<<endl;
        }
        else cout<<n*x<<endl;
    }
}
