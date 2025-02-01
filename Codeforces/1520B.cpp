#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,r;
    cin>>tst;
    while(tst--){
        cin>>n;
        if(n<10) cout<<n<<endl;
        else{
            i=10;
            while(i<=n){
                n=n/10;
                r++;
            }
            cout<<<<endl;
        }
    }
}
