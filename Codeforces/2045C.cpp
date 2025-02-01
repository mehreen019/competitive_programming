#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    string s,t;
    cin>>s>>t;
    vector<int> alp1(27,0), alp2(27,0);
    vector<int> pos1(27), pos2(27);

    if(s.size()==1 || t.size()==1){ cout<<-1<<endl; return 0; }

    for(int i=1;i<s.size();i++){
        if(!alp1[s[i]-'a']){
            alp1[s[i]-'a']++;
            pos1[s[i]-'a']=i;
        }
    }
    for(int i=t.size()-2;i>=0;i--){
        if(!alp2[t[i]-'a']){
            alp2[t[i]-'a']++;
            pos2[t[i]-'a']=i;
        }
    }
    vector<int> match;
    for(int i=0;i<26;i++){
        if(alp1[i] & alp2[i]) match.pb(i);
    }
    if(match.empty()) cout<<-1<<endl;
    else{
        int ans=INT_MAX, spos,tpos,temp;
        for(auto it:match){
            temp = pos1[it]+ (t.size()-1-pos2[it]);
            if(temp<ans){
                ans=temp; spos=pos1[it]; tpos=pos2[it];
            }
        }
        for(int i=0;i<spos;i++){
            cout<<s[i];
        }
        for(int i=tpos;i<t.size();i++){
            cout<<t[i];
        }
        cout<<endl;
    }
}
