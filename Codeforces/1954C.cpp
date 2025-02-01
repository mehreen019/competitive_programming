#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string s1,s2;
        cin>>s1>>s2;
        if(s1>s2){
            string t=s2;
            s2=s1;
            s1=t;
        }
        int idx=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                idx=i;
                if(s1[i]>s2[i]){
                    char t=s2[i];
                    s2[i]=s1[i];
                    s1[i]=t;
                }
                break;
            }
        }
        for(int i=s1.size()-1;i>idx;i--){
            if(s1[i]<s2[i]){
                char c=s1[i];
                s1[i]=s2[i];
                s2[i]=c;
            }
        }
        cout<<s1<<endl<<s2<<endl;
    }
}
//1 1 2
//3
