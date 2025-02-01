 #include<bits/stdc++.h>
 using namespace std;

 bool peak(int n, int r[]){
    int cou=n-2, ec=0;
    for(int i=1;i<n-1;i++){
        if((r[i]>=r[i-1] && r[i]<=r[i+1]) || (r[i]<=r[i-1] && r[i]>=r[i+1])){
            cou--;
        }
        else {x=r[i];}
    }

    cout<<cou;
    if(cou==1) return true;
    else return false;
 }

 int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int cou=0,x;
        cin>>n;
        int r[n],a[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            a[i]=r[i];
        }
        sort(a,a+n);
        if(n<3){cout<<"YES"<<endl; }
        else if(a[0]==r[0] && a[n-1]==r[n-1]){
            for(int i=0;i<n;i++){
                if(a[i]==r[i]) cou++;
            }
            if(cou==n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a[0]==r[n-1] && a[n-1]==r[0]){
            for(int i=n;i>0;i--){
                if(a[i-1]==r[n-i]) cou++;
            }
            if(cou==n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(r[0]>=r[1] && r[n-1]>=r[n-2]){
            if(peak(n, r)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 }
