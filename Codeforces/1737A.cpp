#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,m;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>m>>s;
        int ans=0;
        vector<char> a;
        int r[26]={0};
        for(int i=0;i<n;i++){
            r[s[i]-97]++;
        }
        for(int i=0;i<26;i++) cout<<r[i];
        cout<<endl;
        for(int i=0;i<26;i++){
            if(r[i]<m && ans<m){
                ans+=m-r[i];
                for(int j=0;j<(m-r[i]);j++)
                    a.push_back(r[i]+97);
            }
            if(ans>=m) break;
        }
        for(int i=a.size()-1;i>=0;i--) cout<<a[i];
        cout<<endl;
    }
}
