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

        if(n==1 && m==1)
            cout<<"0"<<endl;
        else if(n==1 || m==1)
        {
            if(n==2 || m==2)
                cout<<"1"<<endl;
            else
                cout<<"-1"<<endl;
        }
        else
        {
            ll a=max(n,m);
            ll b=min(n,m);

            ll ans=(b-1)*2;
            a=a-b;

            ans=ans+((a/2)*4);
            if(a%2==1)
            {
                ans++;
            }

            cout<<ans<<endl;
        }


    }
}
