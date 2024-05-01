#include<bits/stdc++.h>
using namespace std;
const int MAXX=2e5+5;
string s;
int dp[MAXX];

int solve(int idx, stack<char> st){
    if(idx<0) return st.size();
    //else if(dp[idx]!=-1) return dp[idx];

    /*cout<<idx<<" stack is: ";
    if(!st.empty()) cout<<st.top()<<endl;
    else cout<<"empty"<<endl;*/

    int k=INT_MAX;
    if(st.empty()){
        st.push(s[idx]);
        k=min(solve(idx-1, st),k);
    }
    else{
        //cout<<idx<<" cur is: "<<s[idx]<<" stck: "<<st.top()<<" size: "<<st.size()<<endl;
        if(st.top()!=s[idx]){
            st.push(s[idx]);
            k=min( solve(idx-1, st), k);
            st.pop(); st.pop();
            if(!st.empty() && st.top()==s[idx]){
                //cout<<st.top()<<" "<<s[idx]<<endl;
                st.pop();
                k= min(solve(idx-1, st)+1, k);
            }
            else{
                st.push(s[idx]);
                //cout<<idx<<" cur is: "<<k<<endl;
                k= min(solve(idx-1, st)+1, k);
            }
        }
        else{
            st.pop();
            k=min(solve(idx-1, st), k);
        }
    }

    return dp[idx]=k;
}

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        cin>>s;
        memset(dp, -1, sizeof(dp));
        stack<char> st;
        solve(s.size()-1, st);
        cout<<dp[s.size()-1]<<endl;
    }
}
