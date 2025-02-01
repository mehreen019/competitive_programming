#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,c1=0,c2=0; string s,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i==0){ x=s; c1++;}
        else {
        if(s!=x){ y=s; c2++; }
        else c1++;}
    }
    if(c1>c2) cout<<x;
    else cout<<y;
}
