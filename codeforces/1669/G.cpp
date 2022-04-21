#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define LL_INF           1LL<<62
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
        char c[n+5][m+5];

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>c[i][j];
            }
        }

        vector<vector<char>> v(m+5);

        int obs=0,star=0,dot=0;
        char starr='*',dott='.',oo='o';
        for(int i=1; i<=m; i++)
        {
            star=0;
            dot=0;
            for(int j=n; j>=1; j--)
            {
                if(c[j][i]=='*')
                    star++;
                else if(c[j][i]=='.')
                    dot++;
                else if(c[j][i]=='o')
                {
                    for(int k=1; k<=star; k++)
                        v[i].push_back(starr);
                    for(int k=1; k<=dot; k++)
                        v[i].push_back(dott);

                    v[i].push_back(oo);

                    star=0;
                    dot=0;
                }
            }
            for(int k=1; k<=star; k++)
                v[i].push_back(starr);
            for(int k=1; k<=dot; k++)
                v[i].push_back(dott);

            star=0;
            dot=0;
        }

        char ans[n+5][m+5];

        for(int i=n-1; i>=0; i--)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<v[j][i];
            }cout<<endl;
        }
    }
}
