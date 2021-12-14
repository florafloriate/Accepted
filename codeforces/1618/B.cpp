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

        string s="",x,o;
        cin>>x; o=x;
        s+=x[0];
        for(int i=1; i<=n-3; i++)
        {
            cin>>x;
            if(o[1]==x[0])
                s+=x[0];
            else
            {
                s+=o[1]; s+=x[0];
            }
            o=x;
        }
        s+=o[1];
        cout<<s;
        if(s.size()!=n)
            cout<<"a";
        cout<<endl;
    }
}
