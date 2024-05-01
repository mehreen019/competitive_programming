#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,p,ev=0,odd=0,cou=1,ans;
    cin>>n>>p;
    int r[n];
    for(int i=0;i<n;i++){cin>>r[i];
        if(r[i]%2) odd++;
        else ev++;
    }
    for(int i=1;i<odd;i=i+2){
        cou+=i*odd;
    }
    ans=cou+odd*ev;
    cout<<ans<<endl;
}
