#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=n;i>n/2;i--){
                cout<<i<<" "<<(n-i+1)<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<n<<" ";
            for(int i=n-1;i>(n-1)/2;i--){
                cout<<i<<" "<<(n-i)<<" ";
            }
            cout<<endl;
        }
    }
}
