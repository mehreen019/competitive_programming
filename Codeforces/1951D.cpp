#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll large=1e18;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tst;
    cin>>tst;
    while(tst--){
        ll n,m,k;
        cin>>n>>m;
        vector<int> nums;
        if((n/m)<2 && n!=m){
            int tempm=m;
            bool ans=0;
            while(tempm!=0){
                int divv=(n/tempm);
                if(((n%tempm)+divv)==m){
                    nums.push_back(divv);
                    nums.push_back(n%tempm);
                    ans=1;
                    break;
                }
                else tempm--;
            }
            if(ans){
                cout<<"YES"<<endl<<nums.size()+1<<endl;
                for(int i=0;i<nums.size();i++){
                    cout<<nums[i]<<" ";
                }
                cout<<large<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl<<2<<endl;
            cout<<n/m<<" "<<large<<endl;
        }
    }
}
//1 3
