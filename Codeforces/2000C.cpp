#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
string alphabet= "abcdefghigklpon";

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        string s;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        map<int, char> nc;
        map<char,int> cn;
        vector<int> alp;
        cin>>m;
        for(int i=0;i<m;i++){
            bool ans=1;
            cin>>s;
            if(s.size()==n){
                for(int i=0;i<n;i++){
                    cn[s[i]]=LLONG_MAX;
                    nc[r[i]]='0';
                }

                for(int i=0;i<n;i++){
                    //cout<<s[i]<<" "<<cn[s[i]]<<" "<<r[i]<<" "<<nc[r[i]]<<endl;

                    if(cn[s[i]]!=LLONG_MAX || nc[r[i]]!='0'){
                        if(cn[s[i]]==r[i] && nc[r[i]]==s[i]) continue;
                        else{ ans=0; break; }
                    }
                    else{
                        cn[s[i]]=r[i];
                        nc[r[i]]=s[i];
                    }
                }
            }
            else ans=0;

            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

            nc.clear();
            cn.clear();
        }
    }
}
