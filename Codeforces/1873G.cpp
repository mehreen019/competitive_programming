#include<bits/stdc++.h>
#define pb push_back
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s;
        int cnt=0, ans=0;
        bool b=0,a=0, lb=1;
        cin>>s;
        vector<int> lone;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B' && a){
                ans+=cnt; lone.pb(cnt); cnt=0; a=0;
                if(i>0 && s[i-1]=='B') lb=0;
                else if(i<s.size()-1 && s[i+1]=='B') lb=0;

                if(b) continue;
                else b=0;
            }
            else if(s[i]=='B' && !a){
                b=1;
                if(i>0 && s[i-1]=='B') lb=0;
                else if(i<s.size()-1 && s[i+1]=='B') lb=0;
            }
            else if(s[i]=='A'){ cnt++; a=1; }
        }
        if(b){ ans+=cnt; }
        if(a){ lone.pb(cnt); }

        if(!lb || s[0]=='B' || s[s.size()-1]=='B') cout<<ans<<endl;
        else{
            sort(lone.begin(), lone.end());
            ans=0;
            for(int i=1;i<lone.size();i++){
                ans+=lone[i];
            }
            cout<<ans<<endl;
        }
    }
}
