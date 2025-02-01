#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int k;
        cin>>n;
        k=2*n-2;
        string r[k],s,s1,s2;
        for(int i=0;i<k;i++) cin>>r[i];
        sort(r,r+k);
        size_t f1=r[k-1].find(r[0]);
        s=r[k-2];
        if(f1!=r[k-1]::npos()){ if(r[0]==r[k-2][0]){
            s1=r[0]+r[k-1]; s2=r[1]+r[k-2];
            if(s1==s2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        }
    }
}
