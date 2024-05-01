#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst, n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        if(n%2) cout<<"MIKE"<<endl;
        else cout<<"JOE"<<endl;
    }
}
