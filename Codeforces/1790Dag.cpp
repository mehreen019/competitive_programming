#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tst;
    cin>>tst;
    while(tst--){
        cin>>n;
        long long r[n];
        vector<int> v;
        int x=-1,cou1=1,cou2=0;
        bool b=0;
        //map<int,int> a;
        for(int i=0;i<n;i++){
            cin>>r[i];
            //a[r[i]]++;
        }
        sort(r,r+n);
        for(int i=0;i<n-1;i++){
            if(r[i]+1!=r[i+1]){ v.push_back(r[i+1]); b=1;}
            else cou1=1;
        }
        if(b){
            cou2=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]+1!=v[i+1]) cou2++;
           //cout<<v[i]<<" ";
        }}
        cout<<cou1+cou2<<endl;
    }
}
