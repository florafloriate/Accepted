#include<bits/stdc++.h>
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
        ll v[n+5];
        vector<ll> a;
        vector<ll> b;

        for(int i=0; i<n; i++)
            cin>>v[i];

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                a.push_back(v[i]);
            else
                b.push_back(v[i]);
        }

        int p=a.size();
        int q=b.size();

        ll ma[p+5],mb[q+5],sa[p+5],sb[q+5];

        ma[0]=a[0];
        sa[0]=a[0];
        for(int i=1; i<p; i++)
        {
            ma[i]=min(ma[i-1],a[i]);
            sa[i]=sa[i-1]+a[i];
        }

        mb[0]=b[0];
        sb[0]=b[0];
        for(int i=1; i<q; i++)
        {
            mb[i]=min(mb[i-1],b[i]);
            sb[i]=sb[i-1]+b[i];
        }

        for(int i=0; i<p; i++)
            sa[i]+=(n-(i+1))*ma[i];
        for(int i=0; i<q; i++)
            sb[i]+=(n-(i+1))*mb[i];

        ll sum=1000000000000000;

        for(int i=1; i<p; i++)
            sum=min(sa[i]+sb[i-1],sum);
        for(int i=0; i<q; i++)
            sum=min(sa[i]+sb[i],sum);

        cout<<sum<<endl;
    }
}
