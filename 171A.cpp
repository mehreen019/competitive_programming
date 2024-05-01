#include<bits/stdc++.h>
using namespace std;
int main(void){
    int x,n1,n2; string s1,s2,s;
    cin>>s1>>s2;

    n1=s1.size(); n2=s2.size();
    if(s1>s2) x=n1;
    else x=n2;

    for(int i=0; i<x;i++){
        s[i]=s1[n-1]+s2[i];
    }
    cout<<s;
    /*for(int i=x-1;i>=0;i++)
    {cout<<s[i];}*/
}
