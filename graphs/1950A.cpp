#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR"<<endl;
        else if(a<b && b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;

    }
}
