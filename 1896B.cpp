#include<bits/stdc++.h>
using namespace std;
int main(void){
   int tst,n;
   string s;
   cin>>tst;
   while(tst--){
        cin>>n>>s;
        int cou=0, ans=0,t=0,bpos=-1; bool flag=0,b=0,add=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='A'){
                t+=(i-cou);
                if(b){ ans+=t; t=0;}
                cou=i;
                flag=1;
                b=0;
                add=1;
                //cout<<t<<" ";
            }
            else{
                if(flag) b=1;
                if(add){
                    ans+=t;
                    add=0;
                    t=0;
                }
                //cout<<ans<<" ";
                if(b) bpos=i;
            }
        }
        if(b) ans+=(bpos-cou);
        if(s[n-1]=='B'){ ans++; bpos=n-1;}
        //else ans--;
        if(!flag || bpos==-1) cout<<0<<endl;
        else cout<<ans<<endl;
   }
}
//ABBAA
