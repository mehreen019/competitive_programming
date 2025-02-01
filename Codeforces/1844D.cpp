#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s="#abcdefghijklmnopqrstuvwxyz";
    cin>>tst;
    while(tst--){
        cin>>n;
        int d=-1,x=0;
        for(int i=2; i<n;i++){
                //cout<<"ok";
                if(n%i){
                    d=i;
                    break;
                }
        }
        if(n==1) cout<<"a";
        else if(n==2) cout<<"ab";
        else{
            while(x<=n){
                int j=1;
                for( ;j<=d; j++){
                    x+=1;
                    if(x>n) break;
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }
}
