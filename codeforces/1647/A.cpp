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

        string s="",one="1",two="2";

        //s="1";

        for(int i=1; i<=n; i++)
        {
            if(i%3==2)
            {
                for(int j=0; j<s.size(); j++)
                {
                    if(s[j]=='1')
                        s[j]='2';
                    else
                        s[j]='1';
                }
            }
            else if(i%3==0)
            {
                s=s+one;
            }
            else
            {
                s=one+s;
            }
        }

        cout<<s<<endl;
    }
}
