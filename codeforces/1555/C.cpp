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
        int m; cin>>m;
        int a[m+5];
        int b[m+5];

        ll s1=0,s2=0;
        for(int i=1; i<=m; i++)
        {
            cin>>a[i]; s1+=a[i];
        }
        for(int i=1; i<=m; i++)
        {
            cin>>b[i]; s2+=b[i];
        }

        ll mx=LONG_MAX,s3=0;
        for(int i=1; i<=m; i++)
        {
            s1-=a[i];
            if(i!=1)
            {
                s3+=b[i-1];
            }

            if(i==1)
                mx=min(mx,s1);
            else if(i==m)
                mx=min(mx,s3);
            else
                mx=min(mx,max(s1,s3));
        }

        cout<<mx<<endl;
    }
}
