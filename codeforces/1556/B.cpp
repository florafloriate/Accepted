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
        int n; cin>>n;
        ll a[n+5];

        int e=0,o=0,ans=0,ans1=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            else
                o++;
        }

        int ok=abs(n-e-e);

        if(ok!=0 && ok!=1)
        {
            cout<<"-1"<<endl; continue;
        }

        int p,d;

        if(e==o)
        {
            p=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    if(p==0) ans=0;
                    ans+=abs(i-p); p+=2;
                }
            }

            p=1;
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    if(p==1) ans1=0;
                    ans1+=abs(i-p); p+=2;
                }
            }

            cout<< min(ans,ans1) <<endl;
        }
        else if(e>o)
        {
            p=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    ans+=abs(i-p); p+=2;
                }
            }

            cout<<ans<<endl;
        }
        else
        {
            p=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==1)
                {
                    ans+=abs(i-p); p+=2;
                }
            }

            cout<<ans<<endl;
        }
    }
}
