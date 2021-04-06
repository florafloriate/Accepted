#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    double l;
    cin>>n>>l;
    double a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    double mx=max(a[0]-0,l-a[n-1]);

    for(int i=1; i<n; i++)
        mx=max(mx,(a[i]-a[i-1])/2.0);

    cout<<fixed<<setprecision(10)<<mx<<endl;

    return 0;
}
