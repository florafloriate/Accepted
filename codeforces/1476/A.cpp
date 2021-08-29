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
    for(int tc=1; tc<=t; tc++)
    {
        ll n,k; cin>>n>>k;

        ll ans;

        if(k>=n)
        {
            ans=k/n;
            if(k%n==0)
                cout<<ans<<endl;
            else
                cout<<ans+1<<endl;
        }
        else
        {
            ll p=n/k;
            if(n%k==0)
                k*=p;
            else
                k*=(p+1);

            ans=k/n;
            if(k%n==0)
                cout<<ans<<endl;
            else
                cout<<ans+1<<endl;
        }
    }
}
