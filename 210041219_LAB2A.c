#include<bits/stdc++.h>
using namespace std;
int main(void){
    int arr[100000], x, i=0, enlvl, cou=0, wc[200000];
    while(1){
        cin>>x;
        if(x==0) break;
        else{
            arr[i]=x;
            i++;
        }
    }
    cin>>enlvl;
    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(arr[j]+arr[k]==enlvl){
                cou++;

            }

        }
    }

}
