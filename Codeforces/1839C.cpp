#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],x,cou=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>r[i];
            x=r[i];
        }
        if(!x){
            for(int i=0;i<n;i++){
                if(r[i]==1){
                    cou++;
                   // v.push_back(0);
                }
                else{
                    v.push_back(cou);
                    while(cou--){
                        v.push_back(0);
                    }
                    cou=0;
                }
            }
            cout<<"YES"<<endl;
            for(int i=n-1;i>=0;i--) cout<<v[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
