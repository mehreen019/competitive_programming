#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        int sum=0;
        bool l=0,s=1;
        cin>>n;
        vector<int> r;
        for(int i=0;i<n;i++){ cin>>x; r.push_back(x); }
        for(int i=0;i<r.size();i++){
            for(int j=i+1;j<r.size();j++){
                if(r[i]==r[j]){ auto it=r.begin()+j; r.erase(it); j++;}
            }
        }
        for(int i=0;i<r.size()-1;i++){ if(r[i]>r[i+1]){ r[i]=0; sum++; } }
        cout<<sum<<endl;
    }
}
