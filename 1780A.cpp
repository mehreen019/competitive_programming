#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],os=0,es=0,c=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]%2) os++;
            else es++;
        }
        if(os>=3){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(r[i]%2){cout<<i+1<<" "; c++; }
                if(c==3) { cout<<endl;break;}
                }
            }
        else if(es>=2 && os>=1){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(r[i]%2==0){cout<<i+1<<" "; c++;}
                if(c==2) {break;}
            }
            for(int i=0;i<n;i++){
                if(r[i]%2){ cout<<i+1<<" "; c++;}
                if(c==3) { cout<<endl;break;}
            }
        }
        else cout<<"NO"<<endl;

        }
}
