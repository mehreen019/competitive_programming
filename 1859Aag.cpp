#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],cou=1;
        vector<int> b,c;
        bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        for(int i=1;i<n;i++){
            if(r[0]%r[i]==0 && r[0]!=r[i]) { l=1; break; }
            if(r[0]==r[i]) cou++;
        }
        if(l || cou==n) cout<<-1<<endl;
        else{
            cout<<cou<<" "<<n-cou<<endl;
            for(int i=0;i<cou;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
            for(int i=cou;i<n;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
        }
    }
}
