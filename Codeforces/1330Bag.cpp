#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],q[200000]={0},mx=-1,ml=0;
        vector<int> a,b;
        bool l=0,c1=0,c2=0,d=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(q[r[i]]!=0) b.push_back(r[i]);
            else a.push_back(r[i]);
            q[r[i]]++;
            if(q[r[i]]>=3) l=1;
            if(r[i-1]==r[i] && (i-1!=0 || i!=n-1)) d=1;
            mx=max(mx,r[i]);
        }
        int c=n-mx,cou1=0,cou2=0;
        sort(r,r+c);
        sort(r+n-c,r+n, greater<int>());
        //for(int i=0;i<n;i++) cout<<r[i]<<" ";
        for(int i=0;i<c;i++){
            if(r[i]==i+1) cou1++;
            if(r[n-i-1]==i+1) cou2++;
        }
        if(cou1==c) c1=1;
        if(cou2==c) c2=1;
        //cout<<endl<<cou1<<" "<<cou2<<endl;
        if(l==0 || (a.size()!=mx && b.size()!=mx)) cout<<0<<endl;
        else if(c1 && c2){
            cout<<2<<endl;
            cout<<a.size()<<" "<<b.size()<<endl;
            cout<<b.size()<<" "<<a.size()<<endl;
        }
        else if(d) cout<<0<<endl;
        else if(c1==0 && c2){
            cout<<1<<endl;
            cout<<a.size()<<" "<<b.size()<<endl;
        }
        else if(c1 && c2==0){
            cout<<1<<endl;
            cout<<b.size()<<" "<<a.size()<<endl;
        }
        else cout<<0<<endl;
    }
}
