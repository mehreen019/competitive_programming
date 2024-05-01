#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    char r[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>r[i][j];
        }
    }
    char x=r[0][0], y=r[0][1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){ if(r[i][j]!=x) { cout<<"NO"<<endl; return 0; } }
            else { if(r[i][j]!=y){ cout<<"NO"<<endl; return 0; } }
        }
    }
    if(x!=y)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
