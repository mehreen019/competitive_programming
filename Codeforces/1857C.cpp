#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        vector<int> s;
        int as=(n*(n-1))/2, max_el=INT_MIN,maxx,inn=n;
        int r[n+1], a[as+1];
        for(int i=1;i<=as;i++){
            cin>>a[i];
        }
        n--;
        int i=1,lim=n;
        sort(a+1, a+as);
        while(n>0){
            maxx=INT_MIN;
            for( ;i<=lim;i++){
                maxx=max(maxx, a[i]);
            }
            s.push_back(maxx);
            n--;lim+=n;
        }
        sort(s.begin(),s.end());
        for(int i=0;i<inn-1;i++){
            cout<<s[i]<<" ";
        }
        cout<<1000000000<<endl;
    }
}
