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
        double a[n+5];
        for(int i=1; i<=n; i++)
            cin>>a[i];

        if(n==1 || n==2)
        {
            cout<<"0"<<endl;
            continue;
        }

        int cnt=0,ans=INT_MAX;

        for(int i=1; i<=n-1; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                double d=(a[j]-a[i])/(j-i);
                double f=a[j]-(j-1)*d;
                cnt=0;
                for(int k=1; k<=n; k++)
                {
                    if(abs((a[k] - (f+(k-1)*d)))>0.000001)
                    {
                        cnt++;
                    }
                }
                ans=min(ans,cnt);
            }
        }

        cout<<ans<<endl;
    }
}
