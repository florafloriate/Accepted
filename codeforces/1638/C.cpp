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
        for(int i=0; i<n; i++)
            cin>>a[i];

        int m[n+5];
        m[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--)
            m[i]=min(m[i+1],a[i]);

        /// 2 1 4 3 5

        /// 1 1 3 3 5
        int ans=0,mx=0;
        for(int i=0; i<n; i++)
        {
            if(m[i]>mx)
                ans++;
            mx=max(a[i],mx);
        }
        cout<<ans<<endl;
    }
}
