#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],x,y;
        vector<int> a,b;
        for(int i=0;i<n;i++)cin>>r[i];
        a.push_back(1); b.push_back(r[0]);
        int i;
        for(i=1;i<n;i++){
            if(r[i]>=b.back()){
                    a.push_back(1);
                    b.push_back(r[i]);
            }
            else{
                if(r[i]<=b.front()){
                    b.push_back(r[i]);
                    break;
                }
                else a.push_back(0);
            }
        }
        //cout<<i<<" ";
        for(;i<n;i++){
            if(r[i]>=b.back() && r[i]<=b.front()){
                    a.push_back(1);
                    b.push_back(r[i]);
            }
            else a.push_back(0);
        }
        for(int i=0;i<n;i++) cout<<a[i];
        cout<<endl;
    }
}
