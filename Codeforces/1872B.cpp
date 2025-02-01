#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        double a,b,ans=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            ans=min(ans, ceil(b/2)+(a-1));
        }
        cout<<ans<<endl;
    }
}
