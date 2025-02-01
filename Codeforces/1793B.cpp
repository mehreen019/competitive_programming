#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,x,y;
    cin>>tst;
    while(tst--){
        cin>>x>>y;
        cout<<(abs(x-y))*2<<endl;
        for(int i=y;i<x;i++){ cout<<i<<" "; }
        for(int i=x;i>y;i--){ cout<<i<<" "; }
        cout<<endl;
    }
}
