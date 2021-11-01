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
        int n; cin>>n;
        ll a[n+5];
        for(int i=1; i<=n; i++)
            cin>>a[i];

        int ok=1,p=0;

        for(int i=1; i<=n; i++)
        {
            p=0;
            for(int j=2; j<=i+1; j++)
            {
                if(a[i]%j!=0)
                {
                    p=1; break;
                }
            }

            if(p==0)
                ok=0;
        }

        if(ok==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
