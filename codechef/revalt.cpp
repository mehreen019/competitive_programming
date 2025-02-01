#include<bits/stdc++.h>
#define pb push_back
#define pair<int, int> pii
using namespace std;

const int inf=1e18;

signed main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,one=0,zero=0;
        cin>>n;
        string r;
        cin>>r;
        for(int i=0;i<r.size();i++){
            if(r[i]=='1') one++;
            else zero++;
        }
        bool cont=0;
        if((n%2==0 && one==zero)){cont=1; }
        else if(n%2 && (one==zero-1 || zero==one-1)){ cont=1; }
        if(cont){

            bool found=0,ok=1;
            int j;
            for(int i=0;i<n-1;i++){
                if(r[i+1]==r[i]){
                    if(found){ ok=0; break; }
                    else found=1;

                    j=i+1;
                    while(r[j+1]!=r[j] && j<n-1){
                        j++;
                    }

                    if(j==n-1){ break; }
                    else{
                        if(r[i]==r[j+1]){ ok=0; break; }
                        else i=j;
                    }
                }
            }
            if(ok) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
