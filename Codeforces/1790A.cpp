#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        int x=s.size(), cou=0;
        if(s[0]!='3') cout<<0<<endl;
        else{
            string t="314159265358979323846264338327";
            for(int i=0;i<x;i++){
                if(s[i]==t[i]) cou++;
                else break;
            }
            cout<<cou<<endl;
        }
    }
}
