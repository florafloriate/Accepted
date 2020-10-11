#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n,greater<int>());
        ll sum=0;

        for(int i=0; i<=k; i++)
            sum+=a[i];

        cout<<sum<<endl;
    }
}
