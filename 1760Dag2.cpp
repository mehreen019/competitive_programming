#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        long long in=0,dec=0,mid=0,x;
        cin>>n;
        vector<long long> r;
        cin>>x;
        r.push_back(x);
        for(int i=1;i<n;i++){
            cin>>x;
            if(x!=r.back()) r.push_back(x);
        }
        if(r[0]<r[1]) in++;
        if(r[r.size()-2]>r[r.size()-1]) dec++;
        for(int i=1;i<r.size()-1;i++){
            if(r[i]<r[i-1] && r[i]<r[i+1] ) mid++;
        }
        //for(int i=1;i<r.size();i++) cout<<r[i]<<" ";
        //cout<<endl<<in<<" "<<dec<<" "<<mid<<endl;
        if(in+dec+mid==1 || r.size()<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
