#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst; string a,b;
    cin>>tst;
    while(tst--){
        bool l=0;
        cin>>a>>b;
        int x=a.size(); int y=b.size();
        //sort(a.begin(), a.end()); sort(b.begin(), b.end());
        if(a[0]==b[0]){
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
        }
        else if(a[x-1]==b[y-1]){
            cout<<"YES"<<endl;
            cout<<"*"<<a[x-1]<<endl;
        }
        else{
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(a[i]==b[j]){
                    if(a[i+1]==b[j+1]){
                        cout<<"YES"<<endl;
                        cout<<"*"<<b[j]<<b[j+1]<<"*"<<endl;
                        l=1;
                        break;
                    }
                }
            }
            if(l) break;
        }
        if(l==0) cout<<"NO"<<endl;
    }
}
}
