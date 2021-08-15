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
        string s; cin>>s;

        int p=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B' || s[i]=='R')
                p=i;
        }

        if(p==-1)
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                    cout<<"B";
                else
                    cout<<"R";
            }
            cout<<endl;
        }
        else
        {
            for(int i=p+1; i<n; i++)
            {
                if(s[i]=='?' && s[i-1]=='B')
                    s[i]='R';
                else if(s[i]=='?' && s[i-1]=='R')
                    s[i]='B';
            }

            for(int i=p-1; i>=0; i--)
            {
                if(s[i]=='?' && s[i+1]=='B')
                    s[i]='R';
                else if(s[i]=='?' && s[i+1]=='R')
                    s[i]='B';
            }

            cout<<s<<endl;
        }

    }
}
