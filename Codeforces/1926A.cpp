#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s;
        cin>>s;
        int cnta=0,cntb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') cnta++;
            else cntb++;
        }
        if(cnta>cntb) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
}
