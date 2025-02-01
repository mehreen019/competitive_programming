#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x,y;
    cin>>tst;
    while(tst--){
        cin>>n>>x>>y;
        int d=y-x;
        cout<<x<<" "; n--;
        while(n--){
            x+=d;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
