#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,a,b,c;
    cin>>tst;
    while(tst--){
        cin>>a>>b>>c;
        //for a
        int tb=b, tc=c;
        if(tb<tc) swap(tb,tc);
        if(tb-(tb-tc)/2 != tc+(tb-tc)/2)cout<<0<<" ";
        else cout<<1<<" ";
        //for b
        tb=a, tc=c;
        if(tb<tc) swap(tb,tc);
        if(tb-(tb-tc)/2 != tc+(tb-tc)/2)cout<<0<<" ";
        else cout<<1<<" ";
        //for c
        tb=a, tc=b;
        if(tb<tc) swap(tb,tc);
        if(tb-(tb-tc)/2 != tc+(tb-tc)/2)cout<<0<<endl;
        else cout<<1<<endl;
    }
}
//3 5 2
