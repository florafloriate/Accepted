#include<bits/stdc++.h>
#define ll long long
#define fr0(n) for(int i=0; i<n; i++)
#define fr1(n) for(int i=1; i<=n; i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n+5];
        fr0(n)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        ll x,y,z,p,q,r;
        x=y=z=p=q=r=1;

        //1
        for(int i=0; i<5; i++)
        {
            x*=a[i];
        }

        //2
        for(int i=0; i<4; i++)
        {
            y*=a[i];
        }
        y*=a[n-1];

        //3
        for(int i=0; i<3; i++)
        {
            z*=a[i];
        }
        z*=a[n-1];
        z*=a[n-2];

        //4
        for(int i=0; i<2; i++)
        {
            p*=a[i];
        }
        p*=a[n-1];
        p*=a[n-2];
        p*=a[n-3];

        //5
        for(int i=0; i<1; i++)
        {
            q*=a[i];
        }
        q*=a[n-1];
        q*=a[n-2];
        q*=a[n-3];
        q*=a[n-4];

        //6
        r*=a[n-1];
        r*=a[n-2];
        r*=a[n-3];
        r*=a[n-4];
        r*=a[n-5];

        ll ans;

        ans=max(x,y);
        ans=max(ans,z);
        ans=max(ans,p);
        ans=max(ans,q);
        ans=max(ans,r);

        cout<<ans<<endl;
    }
}
