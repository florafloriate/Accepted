#include <bits/stdc++.h>
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
        int a[n+5], mx=0;
        map<int, int> mp;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(mx<a[i])
                mx=a[i];
        }

        for(int i=1; i<=mx; i++)
        {
            mp[a[i]]=1;
        }
        int f=1;
        for(int i=1; i<=mx; i++)
        {
            if(!mp[i])
            {
                f=0;
                break;
            }
        }
        mp.clear();
        if(f)
        {
            for(int i=mx+1; i<=n; i++)
            {
                mp[a[i]]=1;
            }
            for(int i=1; i<=n-mx; i++)
            {
                if(!mp[i])
                {
                    f=0;
                    break;
                }
            }
        }

        mp.clear();
        for(int i=n-mx+1; i<=n; i++)
        {
            mp[a[i]]=1;
        }
        int b=1;
        for(int i=1; i<=mx; i++)
        {
            if(!mp[i])
            {
                b=0;
                break;
            }
        }
        mp.clear();
        if(b)
        {
            for(int i=1; i<=n-mx; i++)
            {
                mp[a[i]]=1;
            }
            for(int i=1; i<=n-mx; i++)
            {
                if(!mp[i])
                {
                    b=0;
                    break;
                }
            }
        }

        if(mx==n-mx)
            b=0;

        cout<< f+b <<endl;

        if(f)
            cout<< mx << " " << n-mx <<endl;
        if(b)
            cout<< n-mx << " " << mx <<endl;

        mp.clear();
    }
}