#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst; string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        int n=s.size();
        if(s[0]==s[1]){
            cout<<s[0]<<" "<<s[1]<<" ";
            for(int i=2;s[i]!='\0';i++){cout<<s[i];}
            cout<<endl;
        }
        else if(s[n-1]==s[n-2]){
            for(int i=0;i<n-2;i++) cout<<s[i];
            cout<<" "<<s[n-2]<<" "<<s[n-1]<<endl;
        }
        else if(s[0]==s[n-1]){
            cout<<s[0]<<" ";
            for(int i=1;i<n-1;i++) cout<<s[i];
            cout<<" "<<s[n-1]<<endl;
        }
        else{
            int i;
            for(i=0; ;i++){ cout<<s[i]; if(s[i+1]=='a'){i++; break;}}
            cout<<" "<<s[i]<<" ";
            for(i=i+1;i<n;i++) cout<<s[i];
            cout<<endl;
        }
    }
}
