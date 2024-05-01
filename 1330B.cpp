#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],q[200000]={0},mx=0,ml=0;
        vector<int> a,b;
        bool l=1,t=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(q[r[i]]!=0) b.push_back(r[i]);
            else a.push_back(r[i]);
            q[r[i]]++;

            if(q[r[i]]>=3) l=0;
            if(q[r[i]]==2) mx=r[i];
        }
        int i=1;
        while(q[i]!=0){
            if(q[i]==2) mx=i;
            if(q[i]==1) ml=i;
            i++;
            //cout<<q[i]<<" ";
        }
        cout<<mx<<" "<<b.back()<<" ";
       // for(int i=1;i<n;i++){
         //   if(r[i]==r[i-1]){
           //     if(r[i-1]+1<ml || )
            //}
        //}
        //for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
        //cout<<endl;
        if(l==0 || a.size()!=ml || b.back()!=mx) cout<<0<<endl;
        else{
            cout<<2<<endl;
            cout<<a.size()<<" "<<b.size()<<endl;
            cout<<b.size()<<" "<<a.size()<<endl;
        }
    }
}
