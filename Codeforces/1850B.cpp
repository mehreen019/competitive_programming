#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,a,b;
    cin>>tst;
    while(tst--){
        cin>>n;
        int ans=0,r[n],in;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10){ ans=max(ans,b);  }
            r[i]=b;
        }
        for(int i=0;i<n;i++) { if(r[i]==ans){ in=i+1; break; } }
        cout<<in<<endl;
    }
}
