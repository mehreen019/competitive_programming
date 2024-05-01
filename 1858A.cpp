#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tst,a,b,c;
    cin>>tst;
    while(tst--){
        cin>>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        else if(b>a) cout<<"Second"<<endl;
        else{
            if(c%2) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}

