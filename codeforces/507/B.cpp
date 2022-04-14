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

ll sqr(ll p)
{
    return p*p;
}

int main()
{
    fastio;
    ll r,x,y,a,b; cin>>r>>x>>y>>a>>b;

    double d=sqrt( sqr(abs(x-a)) + sqr(abs(y-b)) );

    ll ans=d/(2*r);

    double step=d/(2*r);
    if(step-ans>0)
        ans++;
//cout<<step<<endl;
    cout<<ans<<endl;
}
