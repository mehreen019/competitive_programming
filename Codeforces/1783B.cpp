#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,s,k;
    cin>>tst;
    while(tst--){
        cin>>n;
        int arr[n][n];
        k=1;
        s=n*n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i+j)%2==0){ arr[i][j]=k; k++; }
                else{ arr[i][j]=s; s--; }
            }
        }
        if(n%2==0){
        for(int i=1;i<n;i++){
            if(i%2){
                    int k=n-1;
                    int r=1;
                    while(k>n/2){
                    swap(arr[i][k],arr[i][r]);
                    k=k-2;
                    r=r+2;
                    }
                }
        }
        for(int i=1;i<n;i++){
            if(i%2){
                    int k=n-2;
                    int r=0;
                    while(r<n/2){
                    swap(arr[i][k],arr[i][r]);
                    k=k-2;
                    r=r+2;
                    }
                }
        }
        }
        else{
            for(int i=1;i<n;i++){
            if(i%2){
                    int k=n-1;
                    while(k>=n/2){
                    swap(arr[i][k],arr[i][n-k-1]);
                    k--;
                    }
                }
        }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                {
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }

    }
}
