#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,k,s;
    map<int,int> m;
    cin>>n>>k;
    for(int i=1;i<n;i++){
        cin>>m[i];
    }
    int i=1;
    while(i<k){
        s=i+m[i];
        if(s==k){ cout<<"YES"<<endl; return 0; }
        i=s;
    }
    cout<<"NO"<<endl;
}
