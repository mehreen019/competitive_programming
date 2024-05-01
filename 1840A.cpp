#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        vector<char> v;
        char x=s[0]; int l=0;
        for(int i=1;i<n;i++){
            if(l){ x=s[i];l=0; }
            else if(s[i]==x){ v.push_back(s[i]); l=1;}

        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
    }

}
