#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],cou=1;
        vector<int> b,c;
        bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        for(int i=0;i<n-1;i++){
            if(r[i]==r[i+1]) cou++;
        }
        if(cou==n) cout<<-1<<endl;
        else{
        for(int i=0;i<n;i++){
            if(r[i]!=0) b.push_back(r[i]);
            else continue;

            for(int j=i+1;j<n;j++){
                if(r[j]%r[i]==0 && r[j]!=0 && r[i]!=r[j]){
                        c.push_back(r[j]);
                        r[j]=0;
                    }

            }
        }
        if(c.size()==0){
            cout<<n/2<<" "<<n-(n/2)<<endl;
            for(int i=0;i<n/2;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
            for(int i=n/2;i<n;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        }
    }
}
