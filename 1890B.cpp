#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,a,b;
    string s,t;
    cin>>tst;
    while(tst--){
        cin>>a>>b>>s>>t;
        int c=-1; bool l=1;
        vector<int> v;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) {c=1; v.push_back(s[i]); }
        }
        for(int i=1;i<b;i++){
            if(t[i]==t[i-1]) {l=0; break; }
        }
        if(c && l){
            bool ans=0;
            for(int i=0;i<v.size();i++){
                if(t[0]==v[i] || t[b-1]==v[i]){ ans=1; cout<<"NO"<<endl; break;}
            }
            if(!ans) cout<<"YES"<<endl;
        }
        else if(c==-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
