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
        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int ans=a[0];
        for(int i=1; i<n; i++)
            ans|=a[i];

        cout<<ans<<endl;


    }
}
