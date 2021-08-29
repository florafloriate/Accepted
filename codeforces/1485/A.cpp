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
        ll a,b,ans=INT_MAX,cnt; cin>>a>>b;

        if(b>a) ans=1;
        else if(b==a) ans=2;

        for(ll i=b; i<=b+35; i++)
        {
            ll bb=max(i,2LL);
            ll aa=a;
            cnt=0;
            while(aa>0)
            {
                aa/=bb;
                cnt++;
            }
            ans=min(ans,cnt+bb-b);
        }
        cout<<ans<<endl;
    }
}
