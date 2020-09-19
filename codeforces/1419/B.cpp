#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    ll a[35], p=1;
    a[0]=0;
    for(int i=1; i<35; i++)
    {
        a[i]=(2*a[i-1]) + p*p;
        p=2*p;
    }

    while(t--)
    {
        int ok=0;
        ll x;
        cin>>x;
        for(int i=1; x>=0; i++)
        {
            x=x-a[i];
            ok++;
        }
        cout<< ok-1 <<endl;
    }
}
