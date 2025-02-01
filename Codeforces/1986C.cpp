#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        string fs,sc;
        int r[m];
        cin>>fs;
        for(int i=0;i<m;i++){
            cin>>r[i];
        }
        cin>>sc;
        int left=0, right=m-1;
        sort(r,r+m);
        sort(sc.begin(), sc.end());
        for(int i=1;i<m;i++){
            if(r[i]==r[i-1]){
                fs[r[i-1]-1]=sc[right];
                right--;
            }
            else{
                fs[r[i-1]-1]=sc[left];
                left++;
            }
            //cout<<fs<<" ";
        }
        fs[r[m-1]-1]=sc[left];
        //cout<<sc<<endl;
        cout<<fs<<endl;
    }
}
