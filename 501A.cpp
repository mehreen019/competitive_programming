#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c,d,mi,va;
    cin>>a>>b>>c>>d;
    mi=max( (3*a)/10 , a-((a/250)*c));
    va=max( (3*b)/10 , b-((b/250)*d));
    if(mi==va) cout<<"Tie"<<endl;
    else if(mi<va) cout<<"Vasya"<<endl;
    else cout<<"Misha"<<endl;
}
