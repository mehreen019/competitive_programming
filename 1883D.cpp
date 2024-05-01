#include<bits/stdc++.h>
using namespace std;
int main(void){
    set<char> st;
    map<string, int>m;
    map<string, bool>is;
    int q;
    string s1;
    string s2,s3;
    cin>>q;
    bool ans=0;
    while(q--){
        cin>>s1>>s2>>s3;
        string s="";
        s.append(s2);
        s.append(s3);
        if(s1[0]=='+'){
            bool e=0;
            for(auto i:st){
                if(s2[0]==i || s3[0]==i){ e=1; break; }
            }
            if(e==0){
                st.insert(s2[0]);
                st.insert(s3[0]);
                is[s]=1;
            }
            if(is[s]!=1) is[s]=0;

            m[s]++;//cout<<is[s];
        }
        else if(s1[0]=='-'){
            m[s]--;
            //cout<<is[s];
            if(m[s]<=0 && is[s]){
                st.erase(s2[0]);
                st.erase(s3[0]);
                //cout<<"ok";
            }
        }
       /* for(auto it: st){
            cout<<it<<" ";
        }*/
        if(st.size()<=2 && st.size()!=0) ans=0;
        else ans=1;

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
