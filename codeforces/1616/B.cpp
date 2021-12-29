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
        string s,a=""; cin>>s;

        a=a+s[0];

        for(int i=1; i<n; i++)
        {
            if(s[i-1]>s[i])
                a=a+s[i];
            else if(s[i-1]==s[i])
            {
                if(i==1)
                    break;
                else
                    a=a+s[i];
            }
            else
                break;
        }

        int sz=a.size();
        for(int i=0; i<sz; i++)
            cout<<a[i];
        for(int i=sz-1; i>=0; i--)
            cout<<a[i];

        cout<<endl;
    }
}
