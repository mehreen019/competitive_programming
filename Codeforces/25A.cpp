#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,x,f;
    cin>>n;
    vector<int> r;
    int a[3];
    for(int i=0;i<n;i++){
        cin>>x;
        r.push_back(x%2);
        a[x%2]++;
    }
    if(min(a[0],a[1])==a[0]) f=0;
    else f=1;
    //cout<<f<<" ";
    cout<<(find(r.begin(),r.end(),f)-r.begin())+1<<endl;
}
