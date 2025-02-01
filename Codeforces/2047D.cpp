#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

const int maxx=1e5+9;
const int inf=2e18;
const int mod=1e9+7;

int32_t main(void){

	fastio;

	int tst=1;
	cin>>tst;
	while(tst--){
		int n;
		cin>>n;
		int r[n];
		deque<int> dq;
		for(int i=0;i<n;i++){
            cin>>r[i];
            dq.push_back(r[i]);
		}
		stack<int> help, ans;
        priority_queue<int> pq;
        ans.push(dq.front());
        dq.pop_front();

        while(!dq.empty()){
            if(dq.front()>=ans.top()){
                ans.push(dq.front());
                dq.pop_front();
            }
            else{
                while(!ans.empty() && ans.top()>dq.front()){
                    pq.push(ans.top()+1);
                    ans.pop();
                }
                while(!dq.empty() && dq.front()>pq.top()){

                }
                ans.push(dq.front());
                dq.pop_front();
                while(!pq.empty()){
                    dq.push_back(pq.top());
                    pq.pop();
                }
            }
        }
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        cout<<endl;
	}
}
