#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a,b;
        cin>>n>>a>>b;
        int ca=0,cb=0;
        if(n%2){
            ca=n*a;
            cb=((n-1)/2)*b + a;
        }
        else{
            ca=n*a;
            cb=(n/2)*b;
        }
        cout<<min(ca,cb)<<endl;
    }
}
