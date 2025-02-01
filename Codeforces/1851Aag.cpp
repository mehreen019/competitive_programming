#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,m,k,h;
    cin>>tst;
    while(tst--){
        cin>>n>>m>>k>>h;
        int r[n],cou=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if((abs(h-r[i]))%k==0){
                if((abs(h-r[i]))/k<m) cou++;
            }
        }
        cout<<cou<<endl;
    }
}
