#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll r[n-1],cou=1,x,tot=0;
        vector<ll> v;
        vector<ll> m;
        for(int i=0;i<n-1;i++) cin>>r[i];
        v.push_back(r[0]);
        for(int i=1;i<n-1;i++){
            x=r[i]-r[i-1];
            v.push_back(x);
        }
        //ex=r[0];
        x=-1;
        sort(v.begin(), v.end());
        for(int i=1;i<v.size();i++) {
            //cout<<v[i]<<" ";
            if(v[i]==v[i-1]) { x=v[i]; break; }
        }
        if(x==-1) x=v[v.size()-1];
        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<" ";
            if(v[i]!=cou){
                m.push_back(cou);
                //cout<<"ok";
                tot+=cou;
                cou++;
                i--;
            }
            else cou++;

            if(m.size()==2) break;
        }
        if(n==2){
            if(r[0]==1 || r[0]==2 || r[0]==3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x==tot) cout<<tot<<"YES1"<<endl;
        else if(m.size()==0 || m.size()==1) cout<<"YES2"<<endl;
        else cout<<tot<<"NO"<<endl;
        //for(int i=0;i<m.size();i++) cout<<m[i]<<" ";
        //cout<<endl;
    }
}
