#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n;
        cin>>n;
        ll a[n],b[n],c[n],cou=0;
        vector<int> diff;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            diff.push_back(b[i]-a[i]);
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c,c+n);
        reverse(c,c+n);
        sort(diff.begin(), diff.end());
        for(int i=0;i<n;i++){
            cou+= diff[i]*c[i];
        }
        cout<<cou<<endl;
    }
}
