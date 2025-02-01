#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], cnt=0;
        priority_queue<int>odd;
        priority_queue<int, vector<int>, greater<int>> even;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]%2){ odd.push(r[i]); }
            else even.push(r[i]);
        }
        if(odd.size()==0 || even.size()==0) cout<<0<<endl;
        else{
            while(!even.empty()){
                int o=odd.top(), e=even.top();

                if(o>e){
                    odd.push(o+e);
                    cnt++;
                    even.pop();
                }
                else{
                    stack<int> helper;
                    while(!even.empty()){
                        helper.push(even.top());
                        e=even.top();
                        even.pop();
                    }
                    odd.push(o+e);
                    cnt++;
                    while(!helper.empty()){
                        even.push(helper.top());
                        helper.pop();
                    }
                }
            }
            cout<<cnt<<endl;
        }
    }
}
