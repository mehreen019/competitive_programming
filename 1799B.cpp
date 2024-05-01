#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        double r[n],cou=0,x,d; bool e=0,l=0,c=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(cou==0){x=r[i]; cou++;}
            if(r[i]==1) l=1;
            if(r[i]!=x) e=1;
        }
        if(e==0) cout<<0<<endl;
        else if(l && e) cout<<-1<<endl;
        else{
            x=-1;
            cou=0;
            while(1){
            c=0;
            x=*min_element(r,r+n);
            auto y=min_element(r,r+n);
            d=distance(r,y);
            for(int i=0;i<d;i++){
                while(r[i]>x){
                    r[i]=ceil(r[i]/x);
                    cou++;
                    v.push_back(i+1);
                    v.push_back(d+1);
                    //cout<<i+1<<" "<<d+1<<endl;;
                }
            }
            for(int i=d+1;i<n;i++){
                while(r[i]>x){
                    r[i]=ceil(r[i]/x);
                    cou++;
                    v.push_back(i+1);
                    v.push_back(d+1);
                    //cout<<r[i]<<" ";
                }
            }
            x=r[0];
            for(int i=1;i<n;i++){ if(r[i]!=x) c=1; }
            if(c==0) break;
            }
            cout<<cou<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i];
                if(i%2==0) cout<<" ";
                else cout<<endl;
            }
            //for(int i=0;i<n;i++) cout<<r[i]<<" ";
        }
        //cout<<endl;
    }
}
