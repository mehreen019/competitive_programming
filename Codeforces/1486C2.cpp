#include<bits/stdc++.h>
using namespace std;
signed main(void){
    int n;
    cin>>n;
    int low=1,high=n, ans=-1,prev=-1,pl,ph;
    while(high-low>0){
        //cout<<low<<" "<<high<<endl;
        int mid=low+(high-low)/2;
        cout<<"? "<<low<<" "<<high<<endl;
        cout.flush();

        cin>>ans;
        if(prev==-1){
            prev=ans;
            ph=high; pl=low;
            if(ans>=mid) low=mid+1;
            else high=mid;
        }
        else{
            if(ans==prev){
                if(high-low==1){
                    if(ans==low){ low=high; }
                    break;
                }

                ph=high; pl=low;
                if(ans>=mid) low=mid+1;
                //else if(mid-low==1 && low==ans) low++;
                else high=mid;
            }
            else{
                high=ph;
                low=pl;
                mid=low+(high-low)/2;

                if(prev>=mid) high=mid;
                else low=mid+1;
                prev=-1;
            }
        }
    }

    cout<<"! "<<low<<endl;
    cout.flush();
    return 0;
}
