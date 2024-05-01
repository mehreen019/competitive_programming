#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],l=1,h=n,cou=0;
        for(int i=0;i<n;i++) cin>>r[i];
        while(l<h){
            if(r[0]!=l || r[n-1]!=h){ cou++; l++; h--; }
            else break;
        }
        cout<<cou<<endl;
    }
}
