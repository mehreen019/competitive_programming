#include<bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int a,b;
        cin>>a>>b;
        if(a<=b) cout<<-1<<endl;
        else cout<<min(a+b, 2*b+1)<<endl;
    }
}
