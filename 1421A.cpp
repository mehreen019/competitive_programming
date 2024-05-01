#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,a,b,s=0;
    cin>>tst;
    while(tst--){
        cin>>a>>b;
        s=a^b;
        cout<<s<<endl;
    }
}
