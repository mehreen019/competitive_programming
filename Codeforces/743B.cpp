#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,m;
    cin>>n>>m;
    if(m%2) cout<<1<<endl;
    else{
        long long l=0,r=pow(2,n),x;
        while(l<r){
            long long mid=(l+r)/2;
            if(mid==m){ x=log2(r-mid); break;}

            if(m>mid) l=mid;
            else r=mid;
        }
        cout<<x+1<<endl;
    }
}
