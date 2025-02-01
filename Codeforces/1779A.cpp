#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,r=0,l=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='R') r++;
            if(s[i]=='L') l++;
        }
        if(r==0 || l==0){ cout<<"-1"<<endl; continue;}

        size_t f=s.find("RL");
        if(f!= string::npos){
            cout<<"0"<<endl;
        }
        else{
            f=s.find("LR");
            cout<<f+1<<endl;}

    }
}
