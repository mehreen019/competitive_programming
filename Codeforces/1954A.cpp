#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        if(m==1) cout<<"NO"<<endl;
        else{
            int t=n/m, r=n%m;
            if(r!=0){
                if(((t*(m-1))+r-1)<=k) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else{
                if(((t*(m-1)))<=k) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }

        }
    }
}
//
