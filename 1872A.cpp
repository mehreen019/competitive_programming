#include<bits/stdc++.h>
using namespace std;
int main(void){
    double tst,a,b,c;
    cin>>tst;
    while(tst--){
        cin>>a>>b>>c;
        double t=abs(a-b);
        cout<<ceil(((abs(a-b))/2)/c)<<endl;

    }
}
