#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    string s,q="codeforces";
    cin>>tst;
    while(tst--){
        cin>>s;
        int cou=0;
        for(int i=0;i<10;i++){
            if(s[i]!=q[i]) cou++;
        }
        cout<<cou<<endl;
    }
}
