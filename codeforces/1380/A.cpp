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
        for(int i=1; i<=n; i++)
            cin>>a[i];

        int ok=0,p;
        for(int i=2; i<=n-1; i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                ok=1; p=i;
            }
        }

        if(ok)
        {
            cout<<"YES"<<endl;
            cout<<p-1<<" "<<p<<" "<<p+1<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
