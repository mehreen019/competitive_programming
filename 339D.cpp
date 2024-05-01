#include <bits/stdc++.h>
#define maxx 200010
#define ll long long
using namespace std;

const int MAX  = (1e9 + 10);
ll arr[maxx];
ll segment[maxx * 3]={0};
ll lazy[maxx * 3]={0};
int el=0, maxel=0;

void init(int node, ll b, ll e)
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
    int p1= log2(maxel);
    int p2=(log2(node));


    if(p1%2 != p2%2){
        segment[node] = (segment[Left] | segment[Right]);
    }
    else {//cout<<node<<" "<<p2<<" "<<p1<<endl;
        segment[node] = (segment[Left] ^ segment[Right]);
    }
}


///query with lazy (single value)
ll lazy_query(int node, ll b, ll e, ll i)
{
    if(lazy[node]!=0){
        segment[node]+=(e-b+1)*lazy[node]; //unless leaf node, update segment node with entire range of the lazy node

        //passing the current lazy node's pending to it's children
        if(b!=e){
            ll left=node*2;
            ll right=node*2+1;
            lazy[left]+=lazy[node];
            lazy[right]+=lazy[node];
        }
        lazy[node]=0;
    }
    if (i > e || i < b)
        return 0;
    if (b >= i && e <= i)
        return segment[node];
    ll left = node * 2;
    ll right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll q1=lazy_query(left, b, mid, i);
    ll q2=lazy_query(right, mid + 1, e, i);
    return q1+q2;
}

void update(ll node, ll b, ll e, ll i, ll newvalue)
{
    if (i>e||i<b)
        return;
    if (b>=i && e<=i) {
        segment[node] = newvalue;
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    int p1= log2(maxel);
    int p2=(log2(node));
    if(p1%2 != p2%2){
        //cout<<node<<" "<<p2<<" "<<p1<<endl;
        segment[node] = (segment[Left] | segment[Right]);
        //cout<<segment[Left]<<" "<<segment[Right]<<" "<<(segment[Left] | segment[Right])<<endl;
    }
    else {
        segment[node] = (segment[Left] ^ segment[Right]);
    }
}


int main()
{
    ll n, q,x,a,b,newval;
    cin >> n>>q;
    el=pow(2,n);
    maxel= pow(2, log2(el)+1)-1;
    for(ll i = 1; i <= el; i++) cin >> arr[i];
    init(1, 1, el);
    /*for(int i=1;i<=maxel;i++){
        cout<<segment[i]<<" ";
    }*/
    while(q--)
    {
        cin>>x>>a;
        arr[x]=a;
        update(1,1,el,x,a);
        /*for(int i=1;i<=maxel;i++){
        cout<<segment[i]<<" ";
        }*/
        cout<<segment[1]<<endl;
    }
    return 0;
}
