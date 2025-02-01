#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,ans=0;
    cin>>n;
    for(int i=2;i<n;i++){
        ans+=i*(i+1);
    }
    cout<<ans;
}
