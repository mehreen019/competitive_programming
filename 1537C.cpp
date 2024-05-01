#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tst;
    cin>>tst;
    while(tst--){
        int x=-1,d=INT_MAX,y=-1;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        for(int i=0;i<n-1;i++){
            if(r[i]==r[i+1]) x=i;
        }
        if(x!=-1){
            cout<<r[x]<<" ";
            for(int i=x+2;i<n;i++) cout<<r[i]<<" ";
            for(int i=0;i<x;i++) cout<<r[i]<<" ";
            cout<<r[x+1]<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                d=min(d,(r[i+1]-r[i]));
                if(d==r[i+1]-r[i]){ x=i; y=i+1; }
            }
            cout<<r[x]<<" ";
            for(int i=y+1;i<n;i++) cout<<r[i]<<" ";
            for(int i=0;i<x;i++) cout<<r[i]<<" ";
            cout<<r[y]<<endl;
        }
    }
}
