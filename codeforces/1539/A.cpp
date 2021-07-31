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
        ll n,x,t; cin>>n>>x>>t;

        if(x>t)
        {
            cout<<"0"<<endl; continue;
        }

        ll sum=0;

        ll d=min( (t/x), n-1 );

        ll ans=(n-d)*d;

        ll aa=(d*(d-1))/2;

        cout<<ans+aa<<endl;
    }
}
