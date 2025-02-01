#include<bits/stdc++.h>
using namespace std;

/*int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;

    if (a == b) // The case of equal numbers
        return a; // return any one of them
    cout<<a<<" "<<b<<endl;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a); //otherwise subtract a
}*/
int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    cout<<result<<" "<<a<<" "<<b;
    // Return gcd of a and b
    return result;
}

int main(void){
    int tst,a,b;
    cin>>tst;
    while(tst--){
        cin>>a>>b;
        bool l=0;
        int ans1,ans2;
        for(int i=a;i<=b;i++){
            if(i%2==0 && i!=2){
                l=1;
                ans1=2; ans2=i-2;
                break;
            }
            else{
                int t=3,q=i;
                while(q-t>=0 && t<=sqrt(i)){
                    //cout<<gcd(q-t,t);
                    if(gcd(q-t,t)==1) t++;
                    else break;
                }
                ans1=q-t; ans2=t;
                if(ans1>0 && ans2>0 && gcd(ans1,ans2)>1){
                    l=1; break;
                }
            }
        }
        if(l) cout<<ans1<<" "<<ans2<<endl;
        else cout<<-1<<endl;
    }
}
