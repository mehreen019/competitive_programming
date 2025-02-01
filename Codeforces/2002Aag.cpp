#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        int col=1, num1=n, num2=m;
        if(n>=k) num1=k;
        if(m>=k) num2=k;
        cout<<num1*num2<<endl;
    }
}
