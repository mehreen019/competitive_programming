#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,s;
    cin>>tst;
    while(tst--){
        cin>>n;
        s=n;
        if(n%2==0){
            for(long long i=n-1;i>=0;i--){
                s=s&i;
                if(s==0){ cout<<i<<endl; break; }
            }
        }
        else cout<<n-2<<endl;
    }
}
