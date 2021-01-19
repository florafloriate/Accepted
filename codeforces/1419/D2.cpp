#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int b[n+5];
    for(int i=0; i<n; i++)
        b[i]=0;

    int p=0;
    for(int i=1; i<n; i+=2)
    {
        b[i]=a[p++];
    }

    for(int i=0; i<n; i+=2)
    {
        b[i]=a[p++];
    }

    p=0;
    for(int i=1; i<n-1; i++)
    {
        if(b[i]<b[i-1] && b[i]<b[i+1])
            p++;
    }

    cout<<p<<endl;
    for(int i=0; i<n-1; i++)
        cout<<b[i]<< " ";
    cout<<b[n-1];


}