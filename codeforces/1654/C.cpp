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

map<ll,ll> mp;

void trial(ll p, ll q, ll v, ll w)
{
    //cout<<"* "<<p<<" "<<q<<" "<<v<<" "<<w<<endl;
    if(mp[p]!=0)
    {
        ll b=min(mp[p],q);
        mp[p]=mp[p]-b;
        q=q-b;
    }

    if(mp[v]!=0)
    {
        ll c=min(mp[v],w);
        mp[v]=mp[v]-c;
        w=w-c;
    }

    if(p==0) return;

    ll k,l,m,nn;
    if(p%2==0)
    {
        k=p/2;
        l=2*q+w;

        m=p/2+1;
        nn=w;
    }
    else
    {
        k=p/2;
        l=q;

        m=p/2+1;
        nn=2*w+q;
    }

    trial(k,l,m,nn);
    return;
}

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        mp.clear();
        ll a[n+5];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            sum+=a[i];
        }

        int f=0;

        if(sum%2==0)
            trial(sum/2,2,sum/2+1,0);
        else
            trial(sum/2,1,sum/2+1,1);

        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]==0)
                f++;
        }

        if(f==n || n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
