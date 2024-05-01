#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s,tts,ts,ins;
    int n,tst;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        int cou=1;
        for(int i=1;i<n-1;i++){
            if(s[i-1]!=s[i+1]) cou++;
        }
        cout<<cou<<endl;
    }
}
