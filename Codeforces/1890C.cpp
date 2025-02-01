#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        string r;
        //vector<int> r;
        int oc=0,zc=0,cou=0;
        //for(int i=0;i<n;i++) cin>>r[i];
        cin>>r;
        for(int i=0;i<n;i++){
            if(r[i]=='0') oc++;
            else zc++;
        }
        if(oc==zc){
            //stack<int> st1,st2,help;
            deque<int> st;
            for(int i=0;i<n;i++){
                st.push_back(r[i]);
            }
            vector<int> ans;
            int i=0,j=n-1;
            while(!st.empty()){
                int t1=-1, t2=-1;
                if(!st.empty()) {t1=st.front();t2=st.back();}
                if(t1=='1' && t2=='1'){
                    //string t='01'+s;
                    j+=2;
                    st.push_front('1');
                    st.pop_back();
                    ans.push_back(i);
                }
                else if(t1=='0' && t2=='0'){
                    ans.push_back(j+1);
                    j+=2;
                    st.push_back('0');
                    st.pop_front();

                }
                else{
                    if(!st.empty()){ st.pop_front();st.pop_back();}
                }
                i++; j--;
                //cout<<i<<" "<<j<<endl;
            }
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
