#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,l,r,x,a,b;
    cin>>tst;
    while(tst--){
        cin>>l>>r>>x>>a>>b;
        if(a==b){ cout<<0<<endl; }
        else if(a>=l && b<=r && abs(b-a)>=x) cout<<1<<endl;
        else if((abs(b-a)<x && r-a>=x && r-b>=x) || (abs(a-b)<x && a-l>=x && b-l>=x)){ cout<<2<<endl; }
        else if((abs(b-a)<x && r-a>=x && b-l>=x) || (abs(a-b)<x && a-l>=x && r-b>=x)){ cout<<3<<endl; }
        else cout<<-1<<endl;
    }
}
