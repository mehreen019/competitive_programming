#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        stack<int> st;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        bool ans=1;
        for(int i=0;i<n-1;i++){
            if(r[i]>r[i+1]){
                int t1=r[i]/10;
                int t2=r[i]%10;
                st.push(t1);
                st.push(t2);
            }
            else{
                st.push(r[i]);
            }
        }
        st.push(r[n-1]);
        while(!st.empty()){
            int t=st.top();
            st.pop();
            //cout<<t<<" ";
            if(!st.empty()){
                if(st.top()>t){
                    int t1=(st.top())/10;
                    int t2=(st.top())%10;
                    if(t1<=t2 && t>=t1 && t>=t2){
                        st.pop();
                        st.push(t1);
                    }
                    else{ ans=0; break;}
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
