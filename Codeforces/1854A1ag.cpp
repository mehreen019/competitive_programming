#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    int r[30];
    cin>>tst;
    while(tst--){
        cin>>n;
        int maxx=-21,maid,loop=0,flag=0;
        bool t=1;
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
            if(r[i]>maxx){ maid=i; maxx=r[i]; }
            if(r[i]<=0) loop++;
        }
        if(n==1){ cout<<0<<endl; }
        else if(loop==n || r[maid]<=0){
            cout<<n-1<<endl;
            for(int i=n;i>1;i--){
                cout<<i-1<<" "<<i<<endl;
            }
        }
        else{
        //cout<<flag<<endl;
        vector<int> v;
        while(r[maid]<=20){
                r[maid]+=r[maid];
                v.push_back(maid+1);
                v.push_back(maid+1);
            }
        for(int i=0;i<n;i++){
                r[i]+=r[maid];
                v.push_back(i+1);
                v.push_back(maid+1);
                r[i]+=r[maid];
                v.push_back(i+1);
                v.push_back(maid+1);
                maid=i;
        }
        cout<<v.size()/2<<endl;
        for(int i=0;i<v.size()-1;i+=2){
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
        /*for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;*/
        }
    }
}
