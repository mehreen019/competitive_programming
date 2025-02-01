#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        int left=0,right=n-1;
        bool ans=0;
        while(left<right){
            if((a[left]!=b[left] && a[left]!=b[right]) || (a[right]!=b[left] && a[right]!=b[right])){
                ans=1; break;
            }
            else{
                left++;
                right--;
            }
        }
        if(ans) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
