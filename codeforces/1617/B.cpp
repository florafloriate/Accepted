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
        ll n; cin>>n;
        ll a,b,c;

        if(n%2==0)
        {
            c=1;
            n--;
            b=n/2;
            a=b+1;

            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            c=1;
            n--;
            b=n/2;
            if(b%2==0)
            {
                b--; a=b+2;
            }
            else
            {
                b-=2; a=b+4;
            }

            cout<<a<<" "<<b<<" "<<c<<endl;

        }
    }
}
