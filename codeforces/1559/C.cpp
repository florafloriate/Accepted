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
        int n,ok; cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        ok=0;
        if(a[0]==1)
        {
            cout<<n+1<<" ";
            for(int i=1; i<=n; i++)
                cout<<i<<" ";
            cout<<endl;
            ok=1;
        }
        else if(a[n-1]==0)
        {
            for(int i=1; i<=n; i++)
                cout<<i<<" ";
            cout<<n+1<<" ";
            cout<<endl;
            ok=1;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if(a[i-1]==0 && a[i]==1)
                {
                    for(int j=1; j<=i; j++)
                        cout<<j<<" ";
                    cout<<n+1<<" ";
                    for(int j=i+1; j<=n; j++)
                        cout<<j<<endl;
                    cout<<endl;

                    ok=1; break;
                }
            }
        }

        if(ok==0)
            cout<<"-1"<<endl;
    }
}
