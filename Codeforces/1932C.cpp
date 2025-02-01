#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e18;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n,m, all=1;
        cin>>n>>m;
        ll r[n], temp=n, left=0, right=n-1;
        string s;
        stack<ll> st;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L'){
                left++;
            }
            else{
                right--;
            }
        }
        //cout<<left<<" "<<right<<endl;
        st.push(r[left]%m); all= (r[left]%m);
        for(int i=n-2;i>=0;i--){
            if(s[i]=='L'){
                left--;
                all*=r[left];
                all= (all%m);
                st.push(all);
            }
            else{
                right++;
                //cout<<all<<" ";
                all*=r[right];
                //cout<<all<<endl;
                all= (all%m);
                st.push(all);
            }
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}
//3 5 2 4
