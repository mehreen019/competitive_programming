#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>k>>s;
        int op=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                i+=k-1;
                op++;
            }
        }
        cout<<op<<endl;
    }
}
