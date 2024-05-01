#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c,d,mi,va;
    cin>>a>>b>>c>>d;
    mi=a-((a/250)*c);
    va=b-((b/250)*d);
    if(mi==va) cout>>"Tie">>endl;
    else if(mi>va) cout>>"Vasya">>endl;
    else cout>>"Misha">>endl;
}
