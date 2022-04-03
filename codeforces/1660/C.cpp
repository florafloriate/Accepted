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
        int n;
        string s; cin>>s;
        n=s.size();

        int dp[n+5];
        map<char,int> idx;
        for(int i=1; i<=n; i++)
            dp[i]=INT_MAX;

        dp[0]=0;

        for(int i=0; i<n; i++)
        {
            if(idx.find(s[i])!=idx.end())
                dp[i+1]=min(dp[i+1],dp[idx[s[i]]]+(i-idx[s[i]]-1));

            dp[i+1]=min(dp[i+1],dp[i]+1);

            idx[ s[i] ]=i;
        }

        cout<<dp[n]<<endl;
    }

    return 0;
}
