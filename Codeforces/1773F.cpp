#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,a,b,x=0;
    cin>>n>>a>>b;
    if(a+b<n){ x=n-(a+b);
    for(int i=0;i<x;i++) cout<<"0:0"<<endl;
    for(int i=0;i<a;i++)  cout<<"1:0"<<endl;
    cout<<"0:"<<b<<endl;
    }
}
