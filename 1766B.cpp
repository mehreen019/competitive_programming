#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    cin>>tst;
    while(tst--){
        char v[26],ts[3]; int k=0,x=0;
        int s1[26]={0};
        cin>>n>>s;
        for(int i=0;i<n;i++){ s1[s[i]-97]++; }
        for(int i=0;i<26;i++){ if(s1[i]>1){ v[k]=(i+97); k++;}}
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(v[i]==s[j]){ ts[0]=s[j]; ts[1]=s[j+1]; size_t f =s.find(ts, j+2);
                    if(f!=string::npos){ cout<<"Yes"<<endl; x=1; break;}
                }
            }
        if(x==1) break;
        }
        if(x!=1) cout<<"NO"<<endl;

    }
}
