#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+5];

        for(int i=0; i<n; i++)
            cin>>a[i];

        bool ok=false;
        for(int i=1; i<n; i++)
        {
            if(a[i-1]<=a[i])
                ok=true;
        }

        if(ok)
            cout<< "YES\n";
        else
            cout<< "NO\n";

    }
}
//Any array can be sorted using
//no more than n(n−1)/2 operations
