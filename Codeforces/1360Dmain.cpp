#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        if(k>=n) cout<<1<<endl;
        else if(k==1) cout<<n<<endl;
        else{
            long long t=n,s=n;
            bool l=1;
            for(long long i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    l=0;
                    if(n/i<=k){t=i; break;}
                }
            }
            if(l) cout<<n<<endl;
            else{
                for(long long i=sqrt(n);i>=2;i--){
                        if(n%i==0 && i<=k){ s=n/i; break;}
                }
                cout<<min(t,s)<<endl;
            }
    }
}
}
