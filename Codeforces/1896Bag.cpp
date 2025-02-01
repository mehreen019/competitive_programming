#include<bits/stdc++.h>
using namespace std;
int main(void){
   int tst,n;
   string s;
   cin>>tst;
   while(tst--){
        cin>>n>>s;
        int cou=0,acou=0,bpos=-1,bcou=0,apos=-1,ans=0; bool flag=0,a=0,add=0,badd=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                acou++;
                apos=i;
                if(badd){
                    ans+=acou+bcou-1;
                    acou=0;bcou=0;
                }
                a=1;
            }
            else{
                if(a){
                bpos=i;
                bcou++;
                badd=1;}
            }
        }
        if(badd){
            ans+=acou+bcou-1;
        }
        if(apos==-1 || bpos==-1) cout<<0<<endl;
        else cout<<ans<<endl;
   }
}
