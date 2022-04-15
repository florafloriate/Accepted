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
    int n; cin>>n;
    ll a[n+5];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    int dp[n+2][5];

    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i=1; i<=n; i++)
    {
        dp[i][0]=max(dp[i-1][0], max(dp[i-1][1],dp[i-1][2]));

        if(a[i]==1)
        {
            dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
            dp[i][2]=dp[i-1][2];
        }
        else if(a[i]==2)
        {
            dp[i][1]=dp[i-1][1];
            dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
        }
        else if(a[i]==3)
        {
            dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
            dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
        }
        else
        {
            dp[i][1]=dp[i-1][1];
            dp[i][2]=dp[i-1][2];
        }
    }

//    for(int i=0; i<=2; i++)
//    {
//        for(int j=1; j<=n; j++)
//        {
//            cout<<dp[j][i]<<" ";
//        }cout<<endl;
//    }

    cout<<n-max(dp[n][1],dp[n][2])<<endl;
}
