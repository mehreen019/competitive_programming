#include<bits/stdc++.h>

using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        string a[n], b[n];
        int par1,par2,s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            //for(int j=0;j<m;j++){
              //  b[i][j]=s[j]-'0';
            //}
        }

        bool ans=1;
        for(int i=0;i<n;i++){
            par1=0; par2=0;
            for(int j=0;j<m;j++){
                par1+= a[i][j]-'0';
                par2+= b[i][j]-'0';
            }
            //cout<<par1<<" "<<par2<<endl;
            if((par1%3)!=(par2%3)){ ans=0; break; }
        }
        if(ans){
            for(int i=0;i<m;i++){
                par1=0; par2=0;
                for(int j=0;j<n;j++){
                    par1+= a[j][i]-'0';
                    par2+= b[j][i]-'0';
                }
                //cout<<par1<<" "<<par2<<endl;
                if((par1%3)!=(par2%3)){ ans=0; break; }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
