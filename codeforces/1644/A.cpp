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
        string s; cin>>s;

        int r=0,b=0,g=0,ok=0;
        for(int i=0; i<6; i++)
        {
            if(s[i]=='r')
                r++;
            else if(s[i]=='b')
                b++;
            else if(s[i]=='g')
                g++;
            else if(s[i]=='R' && r>0)
                ok++;
            else if(s[i]=='G' && g>0)
                ok++;
            else if(s[i]=='B' && b>0)
                ok++;
        }

        if(ok==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
