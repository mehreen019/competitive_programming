#include<bits/stdc++.h>
using namespace std;
const int MAXX=505;
int arr[MAXX][MAXX];

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,c,d;
        cin>>n>>c>>d;
        int r[n*n];
        bool ans=1;
        int nums[n*n];
        //map<int,int> mp;
        for(int i=0;i<n*n;i++){
            cin>>r[i];
            //mp[r[i]]++;
        }
        sort(r,r+(n*n));
        arr[0][0]=r[0];
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                nums[k]=arr[i][j];
                //cout<<nums[k]<<" "<<k<<endl;
                if(i+1<n){
                    arr[i+1][j]=arr[i][j]+c;
                }
                if(j+1<n){
                    arr[i][j+1]=arr[i][j]+d;
                }
                k++;
            }
        }
        //cout<<endl<<k<<endl;
        sort(nums, nums+(n*n));
        for(int i=0;i<n*n;i++){
            //cout<<r[i]<<" "<<nums[i]<<endl;
            if(r[i]!=nums[i]){

                ans=0; break;
            }
        }
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=0;
            }
        }
    }
}
