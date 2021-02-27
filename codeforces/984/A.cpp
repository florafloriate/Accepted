#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    if((n-1)%2==0)
    {
        n-=1;
        n/=2;
        cout<<a[n]<<endl;
    }
    else
    {
        n/=2;
        n-=1;
        cout<<a[n]<<endl;
    }
}

