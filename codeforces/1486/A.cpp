#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        ll sum=0;
        ll value=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            value+=i;
        }

        ll b=a[n-1];
        ll c=n-1;
        int f=0,p=n-2;
        for(int i=0; i<n; i++)
        {
			if(value>sum)
			{
				cout<<"NO\n";
				f=1;
				break;
			}
			sum-=b;
			value-=c;
			b=a[p];
			c--;
			p--;
		}

        if(f!=1)
            cout<<"YES\n";
    }
}
