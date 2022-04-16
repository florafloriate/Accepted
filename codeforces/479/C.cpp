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
    int n; cin>>n;
    ll a[n+2],b[n+2];
    vector<pair<ll,ll>> v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    sort(b,b+n);
    bool f=true;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(ans<=v[i].second)
            ans=v[i].second;
        else
            ans=v[i].first;
    }

    cout<<ans<<endl;

}
