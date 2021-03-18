#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;

        int w,b;
        cin>>w>>b;

        int a=min(k1,k2);

        int f=max(k1,k2)-min(k1,k2);

        f=f/2;

        int c=a+f;

        k1=n-k1;
        k2=n-k2;

        int d=min(k1,k2);

        int e=d+f;

        if(c>=w && e>=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
