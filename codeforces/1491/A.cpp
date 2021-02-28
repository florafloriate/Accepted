#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,q,zero=0,one=0;
    cin>>n>>q;

    int a[n+5];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            zero++;
        if(a[i]==1)
            one++;
    }

    while(q--)
    {
        int t,x,k;
        cin>>t;

        if(t==1)
        {
            cin>>x;
            if(a[x]==1)
            {
                one--;
                zero++;
            }
            else
            {
                one++;
                zero--;
            }

            a[x]=1-a[x];
        }
        else if(t==2)
        {
            cin>>k;
            if(k<=one)
                cout<< "1\n";
            else
                cout<< "0\n";
        }
    }
}
