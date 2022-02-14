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
            cin>>a[i];
        }

        vector<int>x;
        vector<int>y;

        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
                x.push_back(a[i]);
            else
                y.push_back(a[i]);
        }

        int sx=x.size(),sy=y.size();
        int p=0,q=0;
        for(int i=1; i<sx; i++)
        {
            if(x[i-1]>x[i])
                p=1;
        }
        for(int i=1; i<sy; i++)
        {
            if(y[i-1]>y[i])
                q=1;
        }

        if(p==0 && q==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
