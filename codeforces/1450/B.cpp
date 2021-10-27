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
        int n,k; cin>>n>>k;
        int a[n+5],b[n+5];

        for(int i=0; i<n; i++)
            cin>>a[i]>>b[i];

        int ans=-1;

        int cnt=0;

        for(int i=0; i<n; i++)
        {
            cnt=0;
            for(int j=0; j<n; j++)
            {
                if(abs(a[i]-a[j])+abs(b[i]-b[j])<=k)
                    cnt++;
            }

            if(cnt==n)
            {
                ans=1; break;
            }
        }

        cout<<ans<<endl;

    }


}
