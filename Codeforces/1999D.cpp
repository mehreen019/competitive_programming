#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s1,s2;
        cin>>s1>>s2;
        size_t found = s1.find(s2);
        if(found!=string::npos){
            cout<<"YES"<<endl;
            for(int i=0;i<s1.size();i++){
                if(s1[i]=='?') cout<<'a';
                else cout<<s1[i];
            }
            cout<<endl;
        }
        else{
            int bg=0;
            bool ans=0;
            for(int i=0;i<s1.size();i++){
                if(s1[i]==s2[bg] || s1[i]=='?'){
                    int j=i;
                    while((s1[j]==s2[bg] || s1[j]=='?') && j<s1.size()){
                        s1[j]=s2[bg];
                        bg++;
                        j++;
                        if(bg==s2.size()){ ans=1; break; }
                    }

                    if(ans) break;
                    else{ i=j; }
                }
            }

            if(ans){
                cout<<"YES"<<endl;
                for(int i=0;i<s1.size();i++){
                    if(s1[i]=='?') cout<<'a';
                    else cout<<s1[i];
                }
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}
