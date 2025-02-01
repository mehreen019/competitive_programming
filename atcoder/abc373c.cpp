#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int n,x,a=INT_MIN,b=INT_MIN;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            a=max(a,x);
        }
        for(int i=0;i<n;i++){
            cin>>x;
            b=max(b,x);
        }
        cout<<a+b<<endl;
    }
}
