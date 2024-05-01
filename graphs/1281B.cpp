#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s1,s2;
        cin>>s1>>s2;
        int cnt=0, idx=-1, same=-1; bool ans=1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]>s2[i]){
                if(cnt==1){ ans=0; break; }
                for(int j=i+1;j<s1.size();j++){
                    if(s1[j]<s2[i]){
                        idx=j; break;
                    }
                    else if(s1[j]==s2[i]){ same=j;}
                }
                if(idx!=-1){
                    char t=s1[idx];
                    s1[idx]=s1[i];
                    s1[i]=t;
                    ans=1;
                    cnt++;
                    break;
                }
                else if(same!=-1){
                    //cout<<"ok"<<endl;
                    char t=s1[same];
                    s1[same]=s1[i];
                    s1[i]=t;
                    same=-1;
                    cnt++;
                }
                else if(s1[i]>s2[i] && idx==-1 && same==-1){
                    ans=0;
                    break;
                }
            }
            else if(s1[i]==s2[i]){
                if(s1[i]=='A' || cnt>=1) continue;
                for(int j=i+1;j<s1.size();j++){
                    if(s1[j]<s2[i]){
                        idx=j; break;
                    }
                }
                if(idx!=-1){
                    char t=s1[idx];
                    s1[idx]=s1[i];
                    s1[i]=t;
                    ans=1;
                    cnt++;
                    break;
                }
            }
            else{ ans=1; break; }
        }
        if(ans && s1!=s2) cout<<s1<<endl;
        else cout<<"---"<<endl;
    }
}
