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
        ll a[n+2];
        ll b[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        ll sum=0;

        for(int i=1; i<n; i++)
        {
            ll x=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
            ll y=abs(a[i]-b[i-1])+abs(b[i]-a[i-1]);

            if(x>y)
                swap(a[i],b[i]);

            sum=sum+min(x,y);
        }

        cout<<sum<<endl;
    }
}
