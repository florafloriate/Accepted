#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
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

        bool ok=true;
        for(int i=2; i<=n; i++)
        {
            if(abs(a[i-1]-a[i])>=2)
            {
                ok=false;
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<endl;
                break;
            }
        }

        if(ok)
            cout<<"NO"<<endl;
    }
}
