/* vectr theke 4 r bivajjo gula delete kre dite hbe
k prjnto loop chalaye eta vector e store krte hbe
erpr kth index print */
#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst, n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        vector <long long int> v;
        for(long long int i=1;i<=k*2;i++){
            if(i%n==0)continue;
            v.push_back(i);
        }
        cout<<v[k-1]<<endl;
    }
}
