#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n;
        int r[n], mex=0, maxel=-1;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<int> correct,ans;
        priority_queue<int,vector<int>, greater<int>>biggers;
        correct.push_back(-1);
        for(int i=0;i<n;i++){
            if(r[i]<0){
                mex=correct.back()+1;
                ans.push_back(mex-r[i]);
                //maxel=max(maxel, ans.back());
                biggers.push(ans.back());
            }
            else if(r[i]>=1){
                ans.push_back(mex);
                correct.push_back(mex);
                mex++;
                //cout<<mex<<endl;
                //biggers.push_back();
                while(!biggers.empty() && biggers.top()==mex){ correct.push_back(mex); mex++; biggers.pop();}
            }
            /*else if(r[i]>1){
                ans.push_back(mex);
                correct.push_back(mex);
                mex++;
                if(maxel==mex){ mex++; correct.push_back(maxel); }
                maxel=max(maxel, ans.back());
            }*/
        }
        for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
    }
}
//2 4 4
