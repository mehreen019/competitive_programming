#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,x;
    cin>>n;
    vector<int> odd,even;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2){ odd.push_back(i);  }
        else even.push_back(i);
    }
    if(even.size()==1) cout<<even[0];
    else cout<<odd[0];
}
