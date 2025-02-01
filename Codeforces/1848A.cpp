#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,m,n,q,x,y,x1,y1;
    cin>>tst;
    while(tst--){
        bool l=0;
        cin>>m>>n>>q>>x>>y;
        for(int i=0;i<q;i++){
            cin>>x1>>y1;
            if(l==0){
                if((abs(x-x1)+abs(y-y1))%2==0) l=1;
            }
        }
        if(l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
