#include <iostream>
#define maxx 300005
#define ll long long
using namespace std;

const int MAX  = 1e9 + 10;
ll arr[maxx];
ll segment[maxx * 3];
ll lazy[maxx * 3];
void init(int node, int b, int e)
{
    if (b==e) {
        segment[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    segment[node] = (segment[Left] +segment[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if(lazy[node]!=0){
        segment[node]+=lazy[node];
        if(b!=e){
            int left=node*2;
            int right=node*2+1;
            lazy[left]+=lazy[node];
            lazy[right]+=lazy[node];
        }
        lazy[node]=0;
    }
    if (b >= i && e <= j)
        return segment[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int q1=query(left, b, mid, i, j);
    int q2=query(right, mid + 1, e, i, j);
    return q1+q2;
}
void lazy_update(int node, int b, int e, int i, int newvalue)
{
    if(lazy[node]!=0){
        segment[node]+=lazy[node];
        if(b!=e){
            int left=node*2;
            int right=node*2+1;
            lazy[left]+=lazy[node];
            lazy[right]+=lazy[node];
        }
        lazy[node]=0;
    }
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        segment[node] += newvalue;
        if(b!=e){
            lazy[node*2]+=newvalue;
            lazy[node*2+1]+=newvalue;
        }
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    lazy_update(Left, b, mid, i, newvalue);
    lazy_update(Right, mid + 1, e, i, newvalue);
    segment[node] = (segment[Left] + segment[Right]);
}
int main()
{

    ll n, q,x,a,b,newval;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n*3; i++){
        lazy[i]=0;
        segment[i]=0;
    }
    init(1, 1, n);
    for(int i = 1; i <= n*3; i++){
        cout<<segment[i]<<" ";
    }
    cin>>q;
    while(q--)
    {
        cin>>x>>a>>b;
        if(x==1)
        {
            cout<<query(1,1,n,a,b)<<endl;
        }
        else{
            cin>>newval;
        }
    }
    return 0;
}
