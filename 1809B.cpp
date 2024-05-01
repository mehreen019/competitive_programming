#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,tst,s,t;
    cin>>tst;
    while(tst--){
        cin>>n;
        s=sqrt(n); t=sqrt(n-1);
        cout<<min(s,t)<<endl;
    }
}
