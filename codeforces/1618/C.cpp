#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define mem(name,value)  memset(name, value, sizeof(name))
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        ll x,y,ok=1;

        x=a[0];
        for(int i=2; i<n; i+=2)
        {
            x=__gcd(x,a[i]);

            //cout<<"x="<<x<<endl;
        }

        for(int i=1; i<n; i+=2)
        {
            if(a[i]%x==0)
            {
                ok=0; break;
            }
        }

        if(ok==1)
        {
            cout<<x<<endl; continue;
        }

        ok=1;
        y=a[1];
        for(int j=3; j<n; j+=2)
        {
            y=__gcd(y,a[j]);
            //cout<<"y="<<y<<endl;
        }

        for(int j=0; j<n; j+=2)
        {
            if(a[j]%y==0)
            {
                ok=0; break;
            }
        }

        if(ok==1)
        {
            cout<<y<<endl;
        }
        else
            cout<<"0"<<endl;
    }
}
