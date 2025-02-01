#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        map<char, int> m;
        vector<char> odd,even;
        set<char> st;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            st.insert(s[i]);
        }
        for(auto i:st){
            if(m[i]%2) odd.push_back(i);
            else even.push_back(i);
        }
        int t=odd.size()-k, e=even.size();
        if(t<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
