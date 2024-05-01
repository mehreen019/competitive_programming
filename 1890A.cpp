#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tst;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n];
        map<int, int>m;
        for(int i=0;i<n;i++){
            cin>>r[i];
            m[r[i]]++;
        }
        sort(r,r+n);
        if(m.size()>2) cout<<"NO"<<endl;
        else if(m.size()==2){
            if(n%2){
                if(m[r[0]]==m[r[n-1]]+1 || m[r[0]]+1==m[r[n-1]]) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                if(m[r[0]]==m[r[n-1]]) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"YES"<<endl;
    }
}
