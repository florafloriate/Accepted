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
        int n,m; cin>>n>>m;

        int a[n+5][m+5];

        for(int i=1; i<=n; i++)
        {
            string s; cin>>s;

            for(int x=0; x<s.size(); x++)
                a[i][x+1]=s[x]-'0';

        }

        int f=1,one,zero;
        for(int i=1; i<=n-1; i++)
        {
            for(int j=1; j<=m-1; j++)
            {
                one=0; zero=0;
                if(a[i][j]==0)
                    zero++;
                else
                    one++;

                if(a[i][j+1]==0)
                    zero++;
                else
                    one++;

                if(a[i+1][j]==0)
                    zero++;
                else
                    one++;

                if(a[i+1][j+1]==0)
                    zero++;
                else
                    one++;

                if(one==3)
                    f=0;
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
