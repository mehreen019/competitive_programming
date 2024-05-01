#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,a,b;
    cin>>tst;
    while(tst--){
        cin>>a>>b;
        int x=0;
        for(int i=1;i<a;i++){
            x=x^i;
        }
        int n=x^b;
        cout<<n<<endl;
        if(x==b) cout<<a<<endl;
        else if(n==a) cout<<a+2<<endl;
        else cout<<a+1<<endl;
    }
}
