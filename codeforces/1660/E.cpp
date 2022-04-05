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
        int n,one=0; cin>>n;
        string s;
        int a[n+2][n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            s=" "+s;
            for(int j=1; j<=n; j++)
            {
                a[i][j]=s[j]-'0';
                if(a[i][j]==1)
                    one++;
            }
        }

        int dp[n+2][n+2]={0};

        for(int j=1; j<=n; j++)
        {
            if(a[1][j]==1)
                dp[1][j]=1;
        }

        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int k=j;
                if(k==1) k=n;
                else k--;

                if(a[i][j]==1)
                    dp[i][j]=dp[i-1][k]+1;
                else
                    dp[i][j]=dp[i-1][k];
            }
        }

        int mx=INT_MIN;
        for(int j=1; j<=n; j++)
            mx=max(mx,dp[n][j]);

        cout<<(n-mx)+(one-mx)<<endl;

    }
}
