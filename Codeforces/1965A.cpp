#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],num=0;
        set<int> st;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>r[i];
            st.insert(r[i]);
        }

        if(st.size()==1) cout<<"Alice"<<endl;
        else{
            for(auto it:st){
                v.pb(it);
            }

            num=0;
            for(int i=0;i<v.size()-1;i++){
                if(v[i]==num+1) num++;
                else{ break;}
            }

            if(num==st.size()){
                if(num%2) cout<<"Alice"<<endl;
                else cout<<"Bob"<<endl;
            }
            else{
                if(num%2) cout<<"Bob"<<endl;
                else cout<<"Alice"<<endl;
            }
        }
    }
}
