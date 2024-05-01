#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,p,u,v;
    cin>>n>>p;
    for(int i=0;i<p;i++){
        cin>>u>>v;
    }
    for(int i=0;i<n;i++){
        if(i%2) cout<<0;
        else cout<<1;
    }
}
