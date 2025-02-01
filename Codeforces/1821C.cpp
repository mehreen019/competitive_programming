#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        int r[26]={0},k=0,i=0,d=INT_MIN,ans=INT_MAX,n=s.size();
        while(i<n){
            if(!r[s[i]-'a']){
            k=i;
            d=max(d,k);
            for(int j=i+1;j<n;j++){
                if(s[k]==s[j]){
                    d=max(d,j-k-1);
                    k=j;
                }
            }
            d=max(d,(n-k-1));
            ans=min(ans, (int)log2(d)+1);
            if(ans<0) ans=0;
            //cout<<d<<" ";
            d=INT_MIN;
            r[s[i]-'a']=1;}
            i++;
        }
        cout<<ans<<endl;
    }
}
