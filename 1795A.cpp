#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,a,b;
    string s1,s2;
    cin>>tst;
    while(tst--){
        int cou=0;
        cin>>a>>b>>s1>>s2;
        for(int i=0;i<a-1;i++) if(s1[i]==s1[i+1]) cou++;
        for(int i=0;i<b-1;i++) if(s2[i]==s2[i+1]) cou++;
        if(cou==0) cout<<"YES"<<endl;
        else if(cou==1){
            if(s1[a-1]!=s2[b-1]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
