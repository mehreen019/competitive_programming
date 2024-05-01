#include<bits/stdc++.h>
using namespace std;

char bs(string s,int l,int h,char k){
    int m;
    while(l<h){
    m=(l+h)/2;
    if(k>s[m]){
        l=m+1;
    }
    else h=m;
    }
    if(k==s[l]) return k;
    else return '\0';
}

int bss(string s,int l,int h,char k){
    int m;
    while(l<h){
    m=(l+h)/2;
    if(k>s[m]){
        l=m+1;
    }
    else h=m;
    }
    if(k==s[l]) return l;
    else return -1;
}

int main(void){
    int k=-1,x,i;
    string s,h;
    cin>>s;
    int n=s.size();
    h=s;
    sort(h.begin(),h.end());
    for(i=0;i<n;i++){
        x=bs(h,0,n-1,s[i]);
        if(x!='\0') break;
    }
    if(x!='\0'){
        k=bss(s,i+1,n-1,x);
    }
    if(k!=-1) cout<<k-i<<endl;
    else cout<<(n/2)+1<<endl;
}
