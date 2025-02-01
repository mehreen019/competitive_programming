#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n; string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        int r[n],c=0,res=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                for(int j=i;j>=0;j--){
                    if(r[j-1]>r[j] && s[j-1]=='0' && s[j]=='1') swap(s[j-1],s[i]);
                    else if(r[j]>r[i] && s[j]=='0' && s[i]=='1') swap(s[i],s[j]);
                }
            }
        }
        //cout<<s<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='1') res+=r[i];
            //cout<<r[i]<<" ";
        }
        cout<<res<<endl;
    }
}
