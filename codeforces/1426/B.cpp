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
         int ok=0;

         while(n--)
         {
             int a,b,c,d; cin>>a>>b>>c>>d;
             if(b==c)
                ok=1;
         }

         if(m%2==0)
         {
             if(ok)
                cout<<"YES"<<endl;
             else
                cout<<"NO"<<endl;
         }
         else
            cout<<"NO"<<endl;
    }
}
