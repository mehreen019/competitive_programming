#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int a[n],b[n], cou=0, cur=0;
        vector<pair<int, int>> pc;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int i=0;i<n;i++){
            pc.push_back({a[i], b[i]});
        }
        sort(pc.begin(), pc.end());
        for(int i=n-1;i>=0;i--){
            if(pc[i].first >=pc[i].second +cou){ cou+=pc[i].second; cur=min(cou, pc[i].first); }
            else{ cur=max(pc[i].first, cur); break; }
        }
        cout<<cur<<endl;
    }
}
