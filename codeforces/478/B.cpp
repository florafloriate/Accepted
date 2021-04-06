#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll xC2(ll a)
{
    return a*(a-1)/2;
}

int main()
{
    ll n,m;
    cin>>n>>m;

    ll mx=n-m+1;
    mx=xC2(mx);

    ll mn=(m-n%m)*xC2(n/m)+(n%m)*xC2((n/m)+1);

    cout<<mn<<" "<<mx<<endl;

    return 0;
}
