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
        ll a,b,c,d; cin>>a>>b>>c>>d;
        ll p,q; cin>>p>>q;

        ll wx=c-a; ll hx=d-b;

        ll aa=LONG_MAX,bb=LONG_MAX;
        if(wx+p>w && hx+q>h)
            cout<<"-1"<<endl;
        else
        {
            if(wx+p<=w)
            {
                aa=min(p-a,p-(w-c));
                ll cc=0;
                aa=max(cc,aa);
            }
            if(hx+q<=h)
            {
                bb=min(q-b,q-(h-d));
                ll dd=0;
                bb=max(dd,bb);
            }
            cout<<decimal(9)<<min(aa,bb)<<endl;
        }
    }
}
