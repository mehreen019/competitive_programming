#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int i,ans=0;
        for(i=2;i<n;i++){
            ans+=(i*i);
        }
        ans+=n;
        cout<<ans<<endl;
    }
}
//1 2 3 4 5 10 9 7 8 6
