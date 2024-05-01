#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,sum1,x,sum;
    scanf("%d", &tst);
    while(tst--){
        int sum2=0,i,tsum=0,c=0,k=0;
        scanf("%d %d", &n, &sum1);
        int arr[n];
        vector <int>a;
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            sum2+=arr[i];
        }
        sort(arr, arr+n);
        sum=sum1+sum2;
        //c=sum;
        for(i=1;sum>0;i++){
                if(i!=arr[k]){sum=sum-i;
                    a.push_back(i);
                }
                else{
                    sum=sum-i;
                    a.push_back(i);
                    k++;
                }
        }
        if(sum==0) {c=0;}
        else {c=-1;}
        sort(a.begin(), a.end());
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]-a[i]!=1){c=-2; break;}
        }
        if(c==0) printf("YES\n");
        else printf("NO\n");
    }
}
