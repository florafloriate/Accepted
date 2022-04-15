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
    ll n; cin>>n;
    ll a[n+2];
    ll b[n+2];
    ll d[n+2];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        d[i]=a[i]-b[i];
    }

    sort(d,d+n);
//    for(int i=0; i<n; i++)
//    {
//        cout<<d[i]<<" ";
//    }cout<<endl;

    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ll ck=-d[i];

        ll c=upper_bound(d,d+n,ck)-d;

       // cout<<ck<<" "<<c<<" "<<d[c]<<endl;
        ans=ans+(n-c);

        if(d[i]>0)
            ans--;

        //cout<<" * "<<(n-c)<<endl;
    }
    cout<<ans/2<<endl;
}
