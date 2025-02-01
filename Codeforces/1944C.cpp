#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        map<int, int> m;
        for(int i=0;i<n;i++){
            cin>>r[i];
            m[r[i]]++;
        }
        sort(r,r+n);
        if(r[0]!=0) cout<<0<<endl;
        else{
            int prev=0, pn=0, num=INT_MAX;
            bool ans=0;
            for(auto it:m){
                if(it.first-pn>1){ num=min(num, pn+1); break; }
                else if(it.second<=prev){ num=min(num, it.first); break; }
                else{ prev++; pn=it.first; }
            }
            if(!ans) num=min(r[n-1]+1, num);
            cout<<num<<endl;
        }
    }
}
// 0  1 2 2 3 3
