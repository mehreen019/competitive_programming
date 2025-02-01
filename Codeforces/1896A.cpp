#include<bits/stdc++.h>
using namespace std;
int main(void){
   int tst,n;
   cin>>tst;
   while(tst--){
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        if(r[0]!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
   }
}
//1 2 3 4 5
