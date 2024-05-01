#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        char cur='1';
        int cou=0;
        for(int i=0;i<4;i++){
            if(cur==s[i]) cou+=0;
            else if(cur=='0' || s[i]=='0')cou+=(10-abs(cur-s[i]));
            else cou+=abs(cur-s[i]);
            cou++;
            cur=s[i];
            //cout<<cou<<" ";
        }
        cout<<cou<<endl;
    }
}
