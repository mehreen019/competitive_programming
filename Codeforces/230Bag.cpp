#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        if(n==1) cout<<"NO"<<endl;
        else if(n==4) cout<<"YES"<<endl;
        else{
        long long x=sqrt(n);
        if(n%x==0 && x*x==n && n%2){
            int l=1;
            for(int i=3;i*i<=x;i=i+2){
                if(x%i==0){ l=0; cout<<"NO"<<endl; break;}
            }
            if(l) cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        }
    }
}
