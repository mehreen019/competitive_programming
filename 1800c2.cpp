#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        priority_queue<long long> s;
        long long ans=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0){
                if(!s.empty()){ ans+=s.top(); s.pop();} }
            else{ s.push(x);  }
        }
        cout<<ans<<endl;;
    }
}
