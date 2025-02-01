//1 2 3 4 5 | 0
//0 1 2 3 4 | 5
//5 0 1 2 3 | 4
//4 5 0 1 2 | 3
//3 4 5 0 1 | 2
//2 3 4 5 0 | 1
#include<bits/stdc++.h>
using namespace std;
int main (void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        vector<int> r;
        int miss=0,x;
        for(int i=1;i<=n;i++) miss+=i;
        for(int i=0;i<n;i++){
            cin>>x; miss-=x; r.push_back(x); }
        r.push_back(miss);
        int i=n-(k%(n+1))+1, t=n;
        while(t--){
            cout<<r[i%(n+1)]<<" ";
            i++;
        }
        cout<<endl;
    }
}
