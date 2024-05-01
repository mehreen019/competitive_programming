#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,r;
    cin>>tst;
    while(tst--){
        cin>>n;
        if(n==3) cout<<"NO"<<endl;
        else if(n%2){
            cout<<"YES"<<endl;
            r=(n/2)-1;
            for(int i=1;i<=n;i++){
                if(i%2) cout<<r<<" ";
                else cout<<"-"<<r+1<<" ";
            }
        }
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                if(i%2) cout<<"1 ";
                else cout<<"-1 ";
            }
        }
        cout<<endl;
    }
}
