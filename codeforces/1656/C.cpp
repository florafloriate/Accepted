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
        int one=0,zero=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                zero++;
            else if(a[i]==1)
                one++;
        }

        sort(a,a+n);

        bool ans=true;
        int c=1;
        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]==1)
                ans=false;

            if(a[i]==a[i-1])
                c++;
        }

        //cout<<one<<" "<<zero<<" "<<ans<<endl;
        if(one==0 || n==c)
            cout<<"YES"<<endl;
        else if(one && zero==0 && ans==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
