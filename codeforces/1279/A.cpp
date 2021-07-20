#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
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
        ll a,b,c; cin>>a>>b>>c;
        ll s=a+b+c;
        ll x=min(a,min(b,c));
        ll z=max(a,max(b,c));
        ll y=s-x-z;

        if(z>x+y+1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
