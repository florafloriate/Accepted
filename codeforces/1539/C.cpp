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

    ll n,k,x; cin>>n>>k>>x;
    ll a[n+5];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll grp=1,trp=0;

    vector<ll> b;

    for(int i=1; i<n; i++)
    {
        if(a[i]-a[i-1]>x)
        {
            grp++;
            b.push_back(a[i]-a[i-1]);
        }
    }

    sort(b.begin(),b.end());

    for(int i=0; i<b.size(); i++)
    {
        if(k<0) break;

        if(b[i]%x==0)
        {
            trp=(b[i]/x)-1;
        }
        else
            trp=(b[i]/x);

        if(k>=trp)
        {
            grp--;
            k-=trp;
        }
        else
        {
            k-=trp;
        }
    }

    cout<<grp<<endl;
}
