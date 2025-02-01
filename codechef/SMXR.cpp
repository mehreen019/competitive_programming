#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int t=((n*m)-1)/4;
        cout<<(((n*m)-1-t)*2) <<endl;
    }
}
