#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        string s;
        cin>>s;
        int cou=0,tri=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){ cou++;
            }
            if(i<n-2){
                if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') {tri=1; break;}
            }
        }
        if(tri) cout<<2<<endl;
        else cout<<cou<<endl;
    }
}
