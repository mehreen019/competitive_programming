#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    if(n%2) cout<<"-1"<<endl;
    else{
        for(int i=n;i>0;i--)
        cout<<i<<" ";
    }
}
