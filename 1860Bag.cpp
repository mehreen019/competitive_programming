#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k,a1,ak;
    cin>>tst;
    while(tst--){
        cin>>n>>k>>a1>>ak;
        int t=a1;
        if(t>=n) cout<<0<<endl;
        else{
            if((n-t)%k==0){
                if((n-t)/k<=ak) cout<<0<<endl;
                else cout<<((n-t)/k)-ak<<endl;
            }
            else{
                int fc=0;
                //cout<<fc;
                if(t+(ak*k)>n){
                    while(t<=n){
                        t+=k;
                    }
                    t-=k;
                    //cout<<n%t;
                    if(t==0) fc+=n;
                    else{
                    if(k-(n%t)<=a1){
                        t-=(k-(n%t));
                        fc+=ak-((n-t)/k);
                    }
                    else fc+=(n-t);
                    }
                    cout<<fc<<endl;
                }
                else{
                    t+=ak*k;
                    fc+=(n-t)/k;
                    t+=fc*k;
                    if(t==0) fc+=n;
                    else{
                    if(k-(n%t)<=a1){
                        t-=(k-(n%t));
                        fc+=(n-t)/k;
                    }
                    else fc+=(n-t);
                    }
                    cout<<fc<<endl;
                }

            }
        }


    }


}
