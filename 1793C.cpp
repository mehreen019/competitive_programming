#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        deque<int> d(n);
        int t,x=1,y=n,p=-1,q=-1,i;
        for(int i=0;i<n;i++){ cin>>d[i]; }
        for(i=0;i<n;i++){
            if(d[i]==x){ d.pop_front(); x++; p=i+1;} //cout<<x<<" "; }
            else if(d[i]==y){ d.pop_front(); y--; p=i+1;} //cout<<y<<" "; }
            if(d[n-i-1]==x){ d.pop_back(); x++; q=n-i; }
            else if(d[n-i-1]==y){ d.pop_back(); y--; q=n-i;}
        }
        //cout<<x<<" "<<y;
        for(int i=0;i<n;i++) cout<<d[i]<<" ";
        cout<<endl;
    }
}
