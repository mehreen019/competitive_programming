#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
string alphabet= "abcdefghigklpon";

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        string s;
        cin>>n;
        int r[n], ans=0, prefix[n+1],left=0,right=n-1;
        prefix[0]=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            prefix[i+1]=prefix[i]+r[i];
        }
        cin>>s;
        while(left<right){
            if(s[left]=='L' && s[right]=='R'){ ans+=(prefix[right+1]-prefix[left]); left++; right--; }
            else{
                if(s[left]!='L') left++;
                if(s[right]!='R') right--;
            }
        }

        cout<<ans<<endl;
    }
}
