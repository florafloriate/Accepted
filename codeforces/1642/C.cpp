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
        int n,x; cin>>n>>x;
        ll a[n+5];
        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[ a[i] ]++;
        }

        sort(a,a+n);
        int ans=0,z;
        for(int i=n-1; i>=0; i--)
        {
            if(m[a[i]]==0)
                continue;
            else if(a[i]%x!=0)
            {
                ans+=m[a[i]];
                m[a[i]]=0;
            }
            else
            {
                z=a[i]/x;
                if(m[z]>=m[a[i]])
                {
                    m[z]=m[z]-m[a[i]];
                    m[a[i]]=0;
                }
                else
                {
                    ans+=(m[a[i]]-m[z]);
                    m[a[i]]=0;
                    m[z]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}
