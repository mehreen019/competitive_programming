#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c,tst;
    cin>>tst;
    while(tst--){
    cin>>a>>b>>c;
    if(a+b>=10 || b+c>=10 || a+c>=10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
