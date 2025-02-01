#include<bits/stdc++.h>
using namespace std;
vector<int> fact(11, 0);

int nCr(int n, int r){
    return ((fact[n])/(fact[r]*fact[n-r]));
}

int main(void){
    string s1,s2;
    float q=0,t=0,sum=0,ans=0,cou,fl,totc=0;
    vector<int> v;
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0;i<n;i++){
        if(s1[i]=='+') t+=1;
        else if(s1[i]=='-') t-=1;

        if(s2[i]=='+') sum+=1;
        else if(s2[i]=='-') sum-=1;
        else if(s2[i]=='?') q++;
    }
    cou=q;
    fact[0]=1;
    for(int i=1;i<=q;i++){
        fact[i]=fact[i-1]*i;
        //cout<<fact[i]<<" ";
    }
    for(int i=q;i>=0;i--){
        fl=nCr(q,i);
        //cout<<cou<<" ";
        while(fl--){
            v.push_back(cou);
            totc++;
        }
        cou=cou+((-1)*2);
    }
    for(int i=0;i<v.size();i++){
        if(sum+v[i]==t) ans++;
        //cout<<sum+v[i]<<" ";
    }
    if(q) printf("%0.12f\n", ans/totc);
    else cout<<ans<<endl;
}
