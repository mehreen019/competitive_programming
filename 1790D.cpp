#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int cou=0,x;
        cin>>n;
        int r[n]; map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>r[i];
            m[r[i]]++;
        }
        int pf=-1,ps=0;
        for(auto& it : m){
            if(it.first==pf+1){
                x=it.second-ps;
                if(x>=0) cou=cou+x;
                //cout<<"ok";
            }
            else{ cou+=it.second;}
            pf=it.first;
            ps=it.second;
        }
        cout<<cou<<endl;
    }
}
