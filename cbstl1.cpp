#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll x1,y1,x2,y2,x3,y3,x4,y4;
    ll tst;
    cin>>tst;
    while(tst--){
        string s;
        getline(cin,s);
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        bool l=1;
        if(x3>=x2 || x1>=x4) l=0;
        if(y3>=y2 || y1>=y4) l=0;
        if(l==0) cout<<"No Overlap"<<endl;
        else cout<<max(x1,x3)<<" "<<max(y1,y3)<<" "<<min(x2,x4)<<" "<<min(y4,y2)<<endl;
        if(tst>0) cout<<endl;
    }
}
