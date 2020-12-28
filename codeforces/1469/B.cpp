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
        int  a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int m;
        cin>>m;
        int b[m+5];
        for(int i=0; i<m; i++)
            cin>>b[i];

        int sum=0,mx=-1000;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            mx=max(mx,sum);
        }

        int ans=mx;

        if(ans<0)
            ans=0;

        mx=-1000,sum=0;
        for(int i=0; i<m; i++)
        {
            sum+=b[i];
            mx=max(mx,sum);
        }

        if(mx<0)
            mx=0;

        ans+=mx;

        cout<<ans<<endl;

    }

}
