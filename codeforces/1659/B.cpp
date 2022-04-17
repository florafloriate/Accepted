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
        ll n,k; cin>>n>>k;
        string s; cin>>s;
        int a[n+5],b[n+5];

        for(int i=0; i<n; i++)
            a[i]=s[i]-'0';

        int c=k%2;

        for(int i=0; i<n; i++)
        {
            if(k>0 && a[i]==c)
            {
                b[i]=1;
                k--;

                if(a[i]==0)
                    a[i]=1;
                else
                    a[i]=0;
            }
            else
            {
                b[i]=0;
            }
        }

        b[n-1]+=k;

        if(k%2==1)
        {
            if(a[n-1]==0)
                a[n-1]=1;
            else
                a[n-1]=0;
        }

        if(c==0)
        {
            for(int i=0; i<n; i++)
                cout<<a[i];
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]==0)
                    a[i]=1;
                else
                    a[i]=0;

                cout<<a[i];
            }
            cout<<endl;
        }

        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
