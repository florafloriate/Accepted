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
        int n,m; cin>>n>>m;
        int a[n+5][m+5];

        int mn=INT_MAX,cnt=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];

                if(a[i][j]<0)
                    cnt++;

                a[i][j]=abs(a[i][j]);

                mn=min(mn,a[i][j]);
            }
        }

        int sum=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                sum+=a[i][j];
            }
        }

        if(mn==0)
            cout<<sum<<endl;
        else if(cnt%2==0)
            cout<<sum<<endl;
        else
            cout<<sum-2*mn<<endl;
    }


}
