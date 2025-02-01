#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        long long int s=1,k;
        cin>>n;
        for(long long i=1;i<=n;i++){ s=(s*i)%(1000000007); }
        k=s;
        s=((n-1)*n)%(1000000007);
        cout<<(k*s)%(1000000007)<<endl;
    }
}
