#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string r[n];
            for(int j=0;j<n;j++){
                cin>>r[j];
            }
        bool t=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(r[i][j]=='1'){
                if(r[i][j-1]!='1' && r[i][j+1]!='1' && j>0 && j<n-1){
                    t=1;
                    break;
                }
                }
            }
            if(t) break;
        }
        if(t) cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }
}
