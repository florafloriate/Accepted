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
        ll n; cin>>n;
        ll a[n+5];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        vector<ll> v;
        vector<ll> vc;
        vector<ll> vr;
        vector<ll> vx;
        map<ll,ll> mp;

        for(int i=0; i<n; i++)
        {
            if(a[i]>n || mp[a[i]]>0)
            {
                vc.push_back(a[i]);
            }
            else
                mp[a[i]]++;
        }

        sort(vc.begin(), vc.end());

        vr.push_back(0);

        for(int i=1; i<=n; i++)
            vr.push_back(i);

        for(auto i:mp)
        {
            vr[i.first]=0;
        }

        for(auto i:vr)
        {
            if(i!=0)
                v.push_back(i);
        }

        for(auto i:vc)
        {
            if(i%2==0)
            {
                vx.push_back((i/2)-1);
            }
            else
                vx.push_back(i/2);
        }

        int sz=v.size();
        int ans=vc.size();
        for(int i=0; i<sz; i++)
        {
            if(v[i]>vx[i])
                ans=-1;
        }

        cout<<ans<<endl;
    }
}
