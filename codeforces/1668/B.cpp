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
        ll n,m; cin>>n>>m;
        ll a[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        if(n>m)
            cout<<"NO"<<endl;
        else
        {
            ll ans=a[0]+1;
            for(int i=1; i<n; i++)
            {
                ans=ans+max(a[i],a[i-1])+1;
            }

            if(a[0]>=a[n-1])
            {
                if(ans<=m)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                ans=ans+(a[n-1]-a[0]);

                if(ans<=m)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }

        }
    }
}
