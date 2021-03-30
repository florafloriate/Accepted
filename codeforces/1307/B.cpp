#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;

        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll h=a[n-1];
        int ans=0,p=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                ans=1; p=1;
                break;
            }
        }

        if(x<h && p==0)
        {
            ans=2; p=1;
        }
        else
        {
            if(x%h==0)
                ans=x/h;
            else
                ans=(x/h)+1;
        }

        cout<<ans<<endl;
    }

    return 0;
}
