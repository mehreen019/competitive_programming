#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        if(n%2==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            //char t='A';
            int t=65;
            for(int i=1;i<n;i=i+2){
                cout<<char(t)<<char(t);
                t=t+1;
            }
            cout<<endl;
        }
    }
}
//AAB
