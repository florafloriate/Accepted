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
        int b[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]; b[i]=a[i];
        }

        sort(a,a+n);

        if(a[0]==a[n-1]) cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(b[i]==a[n-1])
                {
                    if(i==n-1 && b[i]>b[i-1])
                    {
                        cout<<i+1<<endl; break;
                    }
                    else if(i==0 && b[i]>b[i+1])
                    {
                        cout<<i+1<<endl; break;
                    }
                    else if((i!=0 && i!=n-1)&&(b[i]>b[i+1] || b[i]>b[i-1]))
                    {
                        cout<<i+1<<endl; break;
                    }
                }
            }
        }
    }
}
