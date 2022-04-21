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
        int n; cin>>n;
        int a[n+5];
        int b[n+5];
        int sa=0,sb=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                cin>>a[sa];
                sa++;
            }
            else
            {
                cin>>b[sb];
                sb++;
            }
        }

        int aa=a[0]%2,bb=b[0]%2;

        bool f=true;
        for(int i=0; i<sa; i++)
        {
            if(a[i]%2!=aa)
            {
                f=false;
            }
        }

        for(int i=0; i<sb; i++)
        {
            if(b[i]%2!=bb)
            {
                f=false;
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
