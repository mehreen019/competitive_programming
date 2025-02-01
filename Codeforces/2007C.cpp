#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,a,b;
        cin>>n>>a>>b;
        int r[n],op=(n*60),minn=INT_MAX, maxx=INT_MIN, ans=INT_MAX;
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0;i<n;i++){
            cin>>r[i];
            q.push(r[i]);
            maxx=max(maxx, r[i]);
        }
        while(op--){
            minn=q.top();
            q.pop();
            if(maxx>minn) ans=min(maxx-minn, ans);
            maxx=max(maxx, minn);

            cout<<
            q.push(minn+a); q.push(minn+b);
        }
        cout<<ans<<endl;
    }
}
