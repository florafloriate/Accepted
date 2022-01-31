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
        string n; cin>>n;

        int s=n.size();

        int x=0;

        for(int i=0; i<s; i++)
            x=x*10+(n[i]-'0');

        if(x%7==0)
            cout<<x<<endl;
        else if(s==3)
        {
            x=(n[0]-'0')*100 + (n[1]-'0')*10 + 9;
            x=x/7;

            cout<<x*7<<endl;
        }
        else
        {
            x=(n[0]-'0')*10 + 9;
            x=x/7;

            cout<<x*7<<endl;
        }

    }
}
