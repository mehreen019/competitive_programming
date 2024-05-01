#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    int r[30];
    cin>>tst;
    while(tst--){
        cin>>n;
        int maxx=-21,maid,t,loop;
        bool flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
            maxx=max(maxx,r[i]);
            if(maxx==r[i]) maid=i+1;
            if(i>=1){
                if(r[i]<r[i-1]) flag=1;
            }
        }
        if(flag==0 || n==1){ cout<<0<<endl; }
        else{
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<n;i++){
            if(r[i]<r[i-1]){
                t=r[i-1]-r[i];
                loop=t/maxx;
                if(t%maxx) loop++;
                r[i]+=maxx*loop;
                while(loop--){
                    v.push_back(i+1);
                    v.push_back(maid);
                }
                maxx=max(r[i],maxx);
                if(maxx==r[i]) maid=i+1;
            }
        }
        cout<<v.size()/2<<endl;
        for(int i=1;i<v.size()-1;i+=2){
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
        /*for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;*/
        }
    }
}
