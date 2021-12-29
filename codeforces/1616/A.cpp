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
        int a[n+5];
        int b[120]={0};
        int c[120]={0};
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]>0)
                c[a[i]]++;
            else if(a[i]<0)
                b[-a[i]]++;
            else
                ans=1;
        }

        for(int i=1; i<=101; i++)
        {
            if(c[i]>=2)
                ans+=2;
            else if(b[i]>=2)
                ans+=2;
            else if(c[i]==1 && b[i]==1)
                ans+=2;
            else if(c[i]==1 || b[i]==1)
                ans++;
        }

        cout<<ans<<endl;
    }
}
