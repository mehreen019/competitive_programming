#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],ans=1;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(ans==r[i]) ans++;
            ans++;
        }
        cout<<ans-1<<endl;
    }
}
