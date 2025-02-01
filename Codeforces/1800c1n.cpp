#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        list<long long> s;
        long long ans=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0){
                if(!s.empty()){s.sort(); ans+=s.back(); s.pop_back();} }
            else{ s.push_back(x);  }
        }
        cout<<ans<<endl;;
    }
}
