#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        long long r,sum=0,t,s; char c; string e;
        r=n/m;
        cout<<r<<" ";
        for(long long i=1;i<=r;i++){
            t=m*i;
            string e=to_string(t);
            s=e.size();
            c=e[s-1];
            t=int(c)-48;
            sum+=t;
           cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}
