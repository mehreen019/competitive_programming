#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
using namespace std;

const int maxx=2e5+10;
const int inf=1e18;
const int mod=1e9+7;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], idx=-1;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]!=-1 && r[i]!=1){ idx=i; }
        }
        set<int> st, extra;
        int prev=0, cur=0;
        if(idx!=-1){

            for(int i=0;i<idx;i++){
                cur+=r[i];
                st.insert(cur);
                prev+=r[i];
                st.insert(prev);
                if(r[i]!=r[i+1]){
                    cur=0;
                }
            }
            //cout<<cur<<" "<<idx<<endl;
            cur=0;
            for(int i=idx+1;i<n;i++){
                cur+=r[i];
                st.insert(cur);
                prev+=r[i];
                st.insert(prev);
                if(i<n-1 && r[i]!=r[i+1]){
                    cur=0;
                }
            }
            /*st.insert(0);

            for(auto it:st){
                extra.insert(it+r[idx]);
            }
            for(auto it:extra){
                st.insert(it);
            }*/
        }

        cur=0; prev=0;
        for(int i=0;i<n;i++){
                cur+=r[i];
                st.insert(cur);
                prev+=r[i];
                st.insert(prev);
                if(i<n-1 && r[i]!=r[i+1]){
                    cur=0;
                }
            }i
            st.insert(0);
        //}

        cout<<st.size()<<endl;
        for(auto it: st){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
