#include<bits/stdc++.h>
#define ll long long
#define tie ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(void){
    tie;
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        vector<int> b;
        int x,tcou=0,t,a[200000],j=0;
        bool l=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //a.push_back(x);
        }
        for(int i=n-1;i>=0;i--){
            t=a[i]-tcou;
            while(t--){
                b.push_back(i+1);
                if(a[j]!=b[j]){
                    l=0;
                    break;
                }
                else j++;
            }
            tcou=a[i];
            while(a[i]==a[i-1] && i!=0) i--;
            if(l==0) break;
        }
        /*if(b.size()==n){
            bool l=1;
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]) { l=0; break; }
            }*/
            if(l) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        /*}
        else cout<<"NO"<<endl;
        */
    }
}
