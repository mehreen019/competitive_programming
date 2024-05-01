#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s,day="AM";
        cin>>s;
        if(s[0]=='1' && s[1]=='2'){
            cout<<s<<" PM"<<endl;
        }
        else if(s[0]=='0' && s[1]=='0'){
            s[0]='1'; s[1]='2';
            cout<<s<<" AM"<<endl;
        }
        else if(s[0]>'1' || (s[0]=='1' && s[1]>'2')){
            day="PM";
            int sec=s[0]-'0', fis=s[1]-'0';
            int final= (sec*10 + fis)%12;
            if(final<10) cout<<'0'<<final%12 <<s[2]<<s[3]<<s[4]<<" "<<day<<endl;
            else cout<<final%12 <<s[2]<<s[3]<<s[4]<<" "<<day<<endl;

        }
        else cout<<s<<" "<<day<<endl;
    }
}
