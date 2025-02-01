#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        int sum=0;
        bool l=0,s=1;
        cin>>n;
        vector<int> a,r;
        for(int i=0;i<n;i++){ cin>>x; r.push_back(x); a.push_back(x);}
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){ if(a[i]!=r[i]){s=0; break;}}
        if(s) cout<<0<<endl;
        else {
            for(int i=0;i<n-1;i++){
                if(r[i]==0) continue;
                else {for(int j=i+1;j<n;j++){
                    if(r[i]==r[j]){r[j]=0; l=1;}
                }
                }
                r[i]=0; sum++;
            }
            cout<<sum<<endl;
        }
    }
}
