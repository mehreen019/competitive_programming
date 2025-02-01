#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c){ swap(a,c); swap(b,d); }

        if(a==c){
            if(d>b){ cout<<(b-c)+1<<endl; }
            else if(d==b){ cout<<(d-c)<<endl; }
            else{ cout<<(d-c)+1<<endl; }
        }
        else{
            if(c>b) cout<<1<<endl;
            else{
                if(d>b){ cout<<(b-c)+2<<endl; }
                else if(d==b){ cout<<(b-c)+1<<endl;  }
                else{ cout<<(d-c)+2<<endl; }
            }
        }
    }
}
