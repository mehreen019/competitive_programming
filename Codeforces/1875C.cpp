#include<bits/stdc++.h>
#define ll long long
#define tie ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main(void){
    tie;
    ll tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        if(n%m==0) cout<<0<<endl;
        else{
            ll cou=0,t=n,c=n%m,b=0; bool l=1;
            while(t){
                t=t%m; b++;
                if(b>20){l=0; break;}
                while(t<m && t){cou+=t; t*=2;}
            }
            if(l) cout<<cou<<endl;
            else cout<<-1<<endl;
        }
    }
}
