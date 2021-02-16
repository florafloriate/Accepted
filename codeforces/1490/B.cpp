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
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int c0=0,c1=0,c2=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]%3==0)
                c0++;
            else if(a[i]%3==1)
                c1++;
            else
                c2++;
        }

        int v=n/3,ans=0;

        if(c0>v)
        {
            ans=ans+(c0-v);
            c1+=(c0-v);
            c0=v;
            //cout<<"C0 "<<c0<<endl;
        }
        if(c1>v)
        {
            ans=ans+(c1-v);
            c2+=(c1-v);
            c1=v;
            //cout<<"C1 "<<c1<<endl;
        }
        if(c2>v)
        {
            ans=ans+(c2-v);
            c0+=(c2-v);
            c2=v;
            //cout<<"C2 "<<c2<<endl;
        }
        if(c0>v)
        {
            ans=ans+(c0-v);
            c1+=(c0-v);
            c0=v;
            //cout<<"C0 "<<c0<<endl;
        }
        if(c1>v)
        {
            ans=ans+(c1-v);
            c2+=(c1-v);
            c1=v;
            //cout<<"C1 "<<c1<<endl;
        }
        if(c2>v)
        {
            ans=ans+(c2-v);
            c0+=(c2-v);
            c2=v;
            //cout<<"C2 "<<c2<<endl;
        }

        cout<<ans<<endl;

    }
}
