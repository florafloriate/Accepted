#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define LL_INF           1LL<<62
#define mem(name,value)  memset(name, value, sizeof(name))
#define binary(x)        bitset<31>(x)
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        ll a[n+5];
        int bit[32]={0};
        ll value;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            for(int j=0; j<=30; j++)
            {
                if((a[i] & (1LL<<j))>0)
                    bit[j]++;
            }
        }

        for(int i=30; i>=0; i--)
        {
            if(k+bit[i]>=n)
            {
                k=k-(n-bit[i]);
                bit[i]=n;
            }
        }

        value=0;

        for(int i=0; i<=30; i++)
        {
            if(bit[i]==n)
            {
                value=value+(1LL<<i);
            }
        }

        cout<<value<<endl;
    }
}
