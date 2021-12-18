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
        ll w,h; cin>>w>>h;

        ll a,b,c,d,x,y;
        cin>>a; cin>>x;
        for(int i=1; i<a; i++)
            cin>>y;

        ll ans=(y-x)*h;

        cin>>a; cin>>x;
        for(int i=1; i<a; i++)
            cin>>y;

        ans=max(ans,(y-x)*h);

        cin>>a; cin>>x;
        for(int i=1; i<a; i++)
            cin>>y;

        ans=max(ans,(y-x)*w);

        cin>>a; cin>>x;
        for(int i=1; i<a; i++)
            cin>>y;

        ans=max(ans,(y-x)*w);

        cout<<ans<<endl;
    }
}
