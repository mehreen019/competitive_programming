#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    //int tst;
    //cin>>tst;
    //while(tst--){
        string s1, s2;
        cin>>s1>>s2;
        bool ans=0;
        int n=s1.size(), m=s2.size();
        for(int i=0;i<(n/m);i++){
            if(s1[i]==s2[0]){
                int j=0,ti=i, cou=0;
                while(j<s2.size()){
                    if(s1[ti]==s2[j]){
                        j++;
                        if(j==s2.size() || j==s1.size()) break;
                        ti+=(n/m);
                        //cout<<ti<<endl;
                    }
                    else break;
                }
                if(j==s2.size() && s1.size()-ti-1<n/m){
                    if(i!=s1.size()-1) ans=1; break;
                }
                //else cout<<j<<" "<<ti<<endl;
            }
        }
        if(ans) cout<<"Yes"<<endl;
        else{
            for(int i=0;i<(n/m)+1;i++){
            if(s1[i]==s2[0]){
                int j=0,ti=i, cou=0;
                while(j<s2.size()){
                    if(s1[ti]==s2[j]){
                        j++;
                        if(j==s2.size() || j==s1.size()) break;
                        ti+=(n/m)+1;
                        //cout<<ti<<endl;
                    }
                    else break;
                }
                if(j==s2.size() && s1.size()-ti-1<(n/m)+1){
                    if(i!=s1.size()-1) ans=1; break;
                }
                //else cout<<j<<" "<<ti<<endl;
            }
        }
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
    //}
}
//abcdefg ace
